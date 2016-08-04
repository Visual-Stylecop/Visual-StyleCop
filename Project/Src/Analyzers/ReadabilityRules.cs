// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ReadabilityRules.cs" company="http://stylecop.codeplex.com">
//   MS-PL
// </copyright>
// <license>
//   This source code is subject to terms and conditions of the Microsoft
//   Public License. A copy of the license can be found in the License.html
//   file at the root of this distribution. If you cannot locate the
//   Microsoft Public License, please send an email to dlr@microsoft.com.
//   By using this source code in any fashion, you are agreeing to be bound
//   by the terms of the Microsoft Public License. You must not remove this
//   notice, or any other, from this software.
// </license>
// <summary>
//   Checks rules which improve readability in the code.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    using System;
    using System.Diagnostics;
    using System.Linq;

    /// <summary>
    /// Checks rules which improve readability in the code.
    /// </summary>
    [SourceAnalyzer(typeof(CsParser))]
    public partial class ReadabilityRules : SourceAnalyzer
    {
        /// <summary>
        /// The built-in type aliases for C#.
        /// </summary>
        private readonly string[][] builtInTypes = new[]
                                                       {
                                                           new[] { "Boolean", "System.Boolean", "bool" }, new[] { "Object", "System.Object", "object" },
                                                           new[] { "String", "System.String", "string" }, new[] { "Int16", "System.Int16", "short" },
                                                           new[] { "UInt16", "System.UInt16", "ushort" }, new[] { "Int32", "System.Int32", "int" },
                                                           new[] { "UInt32", "System.UInt32", "uint" }, new[] { "Int64", "System.Int64", "long" },
                                                           new[] { "UInt64", "System.UInt64", "ulong" }, new[] { "Double", "System.Double", "double" },
                                                           new[] { "Single", "System.Single", "float" }, new[] { "Byte", "System.Byte", "byte" },
                                                           new[] { "SByte", "System.SByte", "sbyte" }, new[] { "Char", "System.Char", "char" },
                                                           new[] { "Decimal", "System.Decimal", "decimal" }
                                                       };

        /// <summary>
        /// Checks the methods within the given document.
        /// </summary>
        /// <param name="document">
        /// The document to check.
        /// </param>
        public override void AnalyzeDocument(CodeDocument document)
        {
            Param.RequireNotNull(document, "document");

            CsDocument csdocument = (CsDocument)document;

            Settings settings = default(Settings);
            settings.DoNotUseRegions = this.IsRuleEnabled(document, Rules.DoNotUseRegions.ToString());
            settings.DoNotPlaceRegionsWithinElements = this.IsRuleEnabled(document, Rules.DoNotPlaceRegionsWithinElements.ToString());

            if (csdocument.RootElement != null && !csdocument.RootElement.Generated)
            {
                // Checks various formatting rules.
                csdocument.WalkDocument(this.ProcessElement, null, new CodeWalkerExpressionVisitor<object>(this.ProcessExpression), settings);

                // Check statement formatting rules.
                this.CheckStatementFormattingRulesForElement(csdocument.RootElement);

                // Check the class member rules.
                this.CheckClassMemberRulesForElements(csdocument.RootElement, null, null);

                // Looks for empty comments.
                this.CheckForEmptyComments(csdocument.RootElement);

                // Checks the usage of the built-in types and empty strings.
                this.IterateTokenList(csdocument, settings);
            }
        }

        /// <inheritdoc />
        public override bool DoAnalysis(CodeDocument document)
        {
            Param.RequireNotNull(document, "document");

            CsDocument csdocument = (CsDocument)document;

            return csdocument.FileHeader == null || !csdocument.FileHeader.UnStyled;
        }

        /// <summary>
        /// Determines whether the statement is declaring a constant field or variable.
        /// </summary>
        /// <param name="assignmentOperator">
        /// The assignment operator for the variable declaration.
        /// </param>
        /// <returns>
        /// Returns true if the statement is declaring a constant, false otherwise.
        /// </returns>
        private static bool IsConstVariableDeclaration(Node<CsToken> assignmentOperator)
        {
            Param.Ignore(assignmentOperator);

            if (assignmentOperator != null && assignmentOperator.Value.Text == "=")
            {
                // Work backwards until we find the keyword const, or have moved past the beginning of the statement.
                Node<CsToken> token = assignmentOperator.Previous;

                while (token != null)
                {
                    if (token.Value.CsTokenType == CsTokenType.CloseParenthesis || token.Value.CsTokenType == CsTokenType.OpenParenthesis
                        || token.Value.CsTokenType == CsTokenType.OpenCurlyBracket || token.Value.CsTokenType == CsTokenType.CloseCurlyBracket
                        || token.Value.CsTokenType == CsTokenType.Semicolon)
                    {
                        break;
                    }
                    else if (token.Value.CsTokenType == CsTokenType.Const)
                    {
                        return true;
                    }

                    token = token.Previous;
                }
            }

            return false;
        }

        /// <summary>
        /// Determines whether the node is part of a method parameter.
        /// </summary>
        /// <param name="node">
        /// The node to check to see if its part of a method parameter.
        /// </param>
        /// <returns>
        /// Returns true if the node is part of a method parameter, false otherwise.
        /// </returns>
        private static bool IsMethodParameterDeclaration(Node<CsToken> node)
        {
            Param.Ignore(node);

            if (node != null && node.Value != null)
            {
                ICodePart parent = node.Value.Parent;

                while (parent != null)
                {
                    if (parent.CodePartType == CodePartType.Parameter)
                    {
                        return true;
                    }

                    parent = parent.Parent;
                }
            }

            return false;
        }

        /// <summary>
        /// Checks a type to determine whether it should use one of the built-in types.
        /// </summary>
        /// <param name="type">
        /// The type to check.
        /// </param>
        /// <param name="document">
        /// The parent document.
        /// </param>
        private void CheckBuiltInType(Node<CsToken> type, CsDocument document)
        {
            Param.AssertNotNull(type, "type");
            Param.AssertNotNull(document, "document");

            Debug.Assert(type.Value is TypeToken, "The type must be a TypeToken");
            TypeToken typeToken = (TypeToken)type.Value;

            if (type.Value.CsTokenClass != CsTokenClass.GenericType)
            {
                for (int i = 0; i < this.builtInTypes.Length; ++i)
                {
                    string[] builtInType = this.builtInTypes[i];

                    if (CsTokenList.MatchTokens(typeToken.ChildTokens.First, builtInType[0])
                        || CsTokenList.MatchTokens(typeToken.ChildTokens.First, "System", ".", builtInType[0]))
                    {
                        // If the previous token is an equals sign, then this is a using alias directive. For example:
                        // using SomeAlias = System.String;
                        bool usingAliasDirective = false;
                        for (Node<CsToken> previous = type.Previous; previous != null; previous = previous.Previous)
                        {
                            if (previous.Value.CsTokenType != CsTokenType.EndOfLine && previous.Value.CsTokenType != CsTokenType.MultiLineComment
                                && previous.Value.CsTokenType != CsTokenType.SingleLineComment && previous.Value.CsTokenType != CsTokenType.WhiteSpace)
                            {
                                if (previous.Value.Text == "=")
                                {
                                    usingAliasDirective = true;
                                }

                                break;
                            }
                        }

                        if (!usingAliasDirective)
                        {
                            this.AddViolation(
                                typeToken.FindParentElement(), typeToken.LineNumber, Rules.UseBuiltInTypeAlias, builtInType[2], builtInType[0], builtInType[1]);
                        }

                        break;
                    }
                }
            }

            for (Node<CsToken> childToken = typeToken.ChildTokens.First; childToken != null; childToken = childToken.Next)
            {
                if (childToken.Value.CsTokenClass == CsTokenClass.Type || childToken.Value.CsTokenClass == CsTokenClass.GenericType)
                {
                    this.CheckBuiltInType(childToken, document);
                }
            }
        }

        /// <summary>
        /// Checks a type to determine whether it should use one of the built-in types.
        /// </summary>
        /// <param name="type">
        /// The type to check.
        /// </param>
        private void CheckBuiltInTypeForMemberAccessExpressions(Node<CsToken> type)
        {
            Param.AssertNotNull(type, "type");

            for (int i = 0; i < this.builtInTypes.Length; ++i)
            {
                string[] builtInType = this.builtInTypes[i];

                if (CsTokenList.MatchTokens(type, builtInType[0]) || CsTokenList.MatchTokens(type, "System", ".", builtInType[0]))
                {
                    this.AddViolation(type.Value.FindParentElement(), type.Value.LineNumber, Rules.UseBuiltInTypeAlias, builtInType[2], builtInType[0], builtInType[1]);
                    break;
                }
            }
        }

        /// <summary>
        /// Checks a string to determine whether it is using an incorrect empty string notation.
        /// </summary>
        /// <param name="stringNode">
        /// The node containing the string to check.
        /// </param>
        private void CheckEmptyString(Node<CsToken> stringNode)
        {
            Param.AssertNotNull(stringNode, "stringNode");

            CsToken @string = stringNode.Value;
            Debug.Assert(@string.CsTokenType == CsTokenType.String, "The token must be a string.");

            if (string.Equals(@string.Text, "\"\"", StringComparison.Ordinal) || string.Equals(@string.Text, "@\"\"", StringComparison.Ordinal) || string.Equals(@string.Text, "$\"\"", StringComparison.Ordinal))
            {
                // Look at the previous non-whitespace token. If it is the 'case' keyword, then do not throw this
                // exception. It is illegal to write case String.Empty : and instead case "": must be written.
                // We also check that the node is not part of a method parameter as these must be "" also.
                Node<CsToken> previousToken = null;
                for (Node<CsToken> previousNode = stringNode.Previous; previousNode != null; previousNode = previousNode.Previous)
                {
                    if (previousNode.Value.CsTokenType != CsTokenType.WhiteSpace && previousNode.Value.CsTokenType != CsTokenType.EndOfLine
                        && previousNode.Value.CsTokenType != CsTokenType.SingleLineComment && previousNode.Value.CsTokenType != CsTokenType.MultiLineComment)
                    {
                        previousToken = previousNode;
                        break;
                    }
                }

                if (previousToken == null
                    || (previousToken.Value.CsTokenType != CsTokenType.Case && !IsConstVariableDeclaration(previousToken) && !IsMethodParameterDeclaration(previousToken)))
                {
                    this.AddViolation(@string.FindParentElement(), @string.LineNumber, Rules.UseStringEmptyForEmptyStrings);
                }
            }
        }

        /// <summary>
        /// Processes the given element.
        /// </summary>
        /// <param name="element">
        /// The element being visited.
        /// </param>
        /// <param name="settings">
        /// The settings.
        /// </param>
        private void CheckForRegionsInElement(CsElement element, Settings settings)
        {
            Param.AssertNotNull(element, "element");
            Param.AssertNotNull(settings, "settings");

            // If the DoNotUseRegions setting is enabled, then skip this check as the region
            // will be discovered during the overall regions rule check.
            if (settings.DoNotPlaceRegionsWithinElements && !settings.DoNotUseRegions && !element.Generated)
            {
                if (element.ElementType == ElementType.Method || element.ElementType == ElementType.Accessor || element.ElementType == ElementType.Constructor
                    || element.ElementType == ElementType.Destructor || element.ElementType == ElementType.Field)
                {
                    for (Node<CsToken> tokenNode = element.Tokens.First; tokenNode != element.Tokens.Last.Next; tokenNode = tokenNode.Next)
                    {
                        // If this token is an opening region directive, this is a violation.
                        if (tokenNode.Value.CsTokenClass == CsTokenClass.RegionDirective)
                        {
                            Region region = (Region)tokenNode.Value;
                            if (region.Beginning && !region.Generated && !region.IsGeneratedCodeRegion)
                            {
                                this.AddViolation(element, tokenNode.Value.LineNumber, Rules.DoNotPlaceRegionsWithinElements);
                            }
                        }
                    }
                }
            }
        }

        /// <summary>
        /// Checks the generic type uses the shorthand declaration format.
        /// </summary>
        /// <param name="type">
        /// The <see cref="CsToken"/> to check.
        /// </param>
        private void CheckShorthandForNullableTypes(CsToken type)
        {
            Param.AssertNotNull(type, "type");

            Debug.Assert(type.CsTokenClass == CsTokenClass.GenericType, "Expected a generic type.");
            GenericType genericType = (GenericType)type;

            // Check the declaration of the generic type for longhand, but allow Nullable<> which has no shorthand
            if (genericType.ChildTokens.Count > 0 && Utils.TokenContainNullable(genericType.ChildTokens.First))
            {
                if (genericType.Parent == null || !(genericType.Parent is TypeofExpression))
                {
                    if (genericType.Parent is Method)
                    {
                        Method parentMethod = genericType.Parent as Method;
                        if (parentMethod.Name == parentMethod.FriendlyTypeText + " " + genericType.Text)
                        {
                            return;
                        }
                    }

                    // Search if parent is nameof expression then allow it.
                    var parent = genericType.FindParentExpression();
                    bool nameofExpression = false;

                    while (parent != null && !nameofExpression)
                    {
                        if (parent is NameofExpression)
                        {
                            nameofExpression = true;
                            parent = null;
                        }
                        else
                        {
                            parent = parent.FindParentExpression();
                        }
                    }

                    if (!nameofExpression)
                    {
                        this.AddViolation(genericType.FindParentElement(), genericType.LineNumber, Rules.UseShorthandForNullableTypes);
                    }
                }
            }
            else
            {
                // Check the parameters of the generic type because the declaration may be nested
                foreach (
                    GenericTypeParameter genericTypeParameter in genericType.GenericTypesParameters.Where(token => token.Type.CsTokenClass == CsTokenClass.GenericType))
                {
                    this.CheckShorthandForNullableTypes(genericTypeParameter.Type);
                }
            }
        }

        /// <summary>
        /// Checks the built-in types and empty strings within a document.
        /// </summary>
        /// <param name="document">
        /// The document containing the tokens.
        /// </param>
        /// <param name="settings">
        /// The current settings.
        /// </param>
        private void IterateTokenList(CsDocument document, Settings settings)
        {
            Param.AssertNotNull(document, "document");
            Param.Ignore(settings);

            for (Node<CsToken> tokenNode = document.Tokens.First; tokenNode != null; tokenNode = tokenNode.Next)
            {
                CsToken token = tokenNode.Value;

                if (token.CsTokenClass == CsTokenClass.Type || token.CsTokenClass == CsTokenClass.GenericType)
                {
                    // Check that the type is using the built-in types, if applicable.
                    this.CheckBuiltInType(tokenNode, document);

                    if (token.CsTokenClass == CsTokenClass.GenericType)
                    {
                        this.CheckShorthandForNullableTypes(tokenNode.Value);
                    }
                }
                else if (token.CsTokenType == CsTokenType.String)
                {
                    // Check that the string is not using the empty string "" syntax.
                    this.CheckEmptyString(tokenNode);
                }
                else if (token.CsTokenClass == CsTokenClass.RegionDirective && settings.DoNotUseRegions)
                {
                    Region region = (Region)token;
                    if (region.Beginning && !region.Generated && !region.IsGeneratedCodeRegion)
                    {
                        // There should not be any regions in the code.
                        this.AddViolation(token.FindParentElement(), token.LineNumber, Rules.DoNotUseRegions);
                    }
                }
            }
        }

        /// <summary>
        /// Checks the given element.
        /// </summary>
        /// <param name="element">
        /// The element being visited.
        /// </param>
        /// <param name="parentElement">
        /// The parent element, if any.
        /// </param>
        /// <param name="context">
        /// The optional visitor context data.
        /// </param>
        /// <returns>
        /// Returns true to continue, or false to stop the walker.
        /// </returns>
        private bool ProcessElement(CsElement element, CsElement parentElement, object context)
        {
            Param.AssertNotNull(element, "element");
            Param.Ignore(parentElement);
            Param.Ignore(context);

            this.CheckMethodParameters(element);
            this.CheckForRegionsInElement(element, (Settings)context);

            return true;
        }

        /// <summary>
        /// Checks the given expression.
        /// </summary>
        /// <param name="expression">
        /// The expression being visited.
        /// </param>
        /// <param name="parentExpression">
        /// The parent expression, if any.
        /// </param>
        /// <param name="parentStatement">
        /// The parent statement, if any.
        /// </param>
        /// <param name="parentElement">
        /// The parent element, if any.
        /// </param>
        /// <param name="context">
        /// The optional visitor context data.
        /// </param>
        /// <returns>
        /// Returns true to continue, or false to stop the walker.
        /// </returns>
        private bool ProcessExpression(Expression expression, Expression parentExpression, Statement parentStatement, CsElement parentElement, object context)
        {
            Param.AssertNotNull(expression, "expression");
            Param.Ignore(parentExpression);
            Param.Ignore(parentStatement);
            Param.AssertNotNull(parentElement, "parentElement");
            Param.Ignore(context);

            if (!parentElement.Generated)
            {
                switch (expression.ExpressionType)
                {
                    case ExpressionType.Query:
                        this.CheckQueryExpression(parentElement, (QueryExpression)expression);
                        break;

                    case ExpressionType.MethodInvocation:
                        this.CheckMethodInvocationParameters(parentElement, (MethodInvocationExpression)expression);
                        break;

                    case ExpressionType.MemberAccess:
                        this.CheckBuiltInTypeForMemberAccessExpressions(((MemberAccessExpression)expression).LeftHandSide.Tokens.First);
                        break;

                    case ExpressionType.ArrayAccess:

                        // Calling this[x] shows up as an ArrayAccessExpression.
                        ArrayAccessExpression a = (ArrayAccessExpression)expression;
                        if (a.Array.Text == "this")
                        {
                            this.CheckIndexerAccessParameters(parentElement, (ArrayAccessExpression)expression);
                        }

                        break;
                }
            }

            return true;
        }

        /// <summary>
        /// The settings for rules.
        /// </summary>
        private struct Settings
        {
            /// <summary>
            /// Indicates whether the DoNotPlaceRegionsWithinElements rule is enabled.
            /// </summary>
            public bool DoNotPlaceRegionsWithinElements;

            /// <summary>
            /// Indicates whether the DoNotUseRegions rule is enabled.
            /// </summary>
            public bool DoNotUseRegions;
        }
    }
}