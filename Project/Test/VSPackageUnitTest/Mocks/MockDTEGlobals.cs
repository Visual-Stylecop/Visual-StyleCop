﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockDTEGlobals.cs" company="http://stylecop.codeplex.com">
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
//   The mock dte globals.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections.Generic;

    using EnvDTE;

    /// <summary>
    /// The mock dte globals.
    /// </summary>
    internal class MockDTEGlobals : EnvDTE.Globals
    {
        private readonly List<string> persisted = new List<string>();

        private Dictionary<string, object> variables = new Dictionary<string, object>();

        /// <summary>
        /// Gets DTE.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public DTE DTE
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Parent.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object Parent
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets VariableNames.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object VariableNames
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// The this.
        /// </summary>
        /// <param name="variableName">
        /// The variable name.
        /// </param>
        public object this[string variableName]
        {
            get
            {
                return this.variables[variableName];
            }

            set
            {
                this.variables[variableName] = value;
            }
        }

        /// <summary>
        /// The clear all.
        /// </summary>
        public void ClearAll()
        {
            this.variables.Clear();
            this.persisted.Clear();
        }

        /// <summary>
        /// The clear non persisted variables.
        /// </summary>
        public void ClearNonPersistedVariables()
        {
            Dictionary<string, object> result = new Dictionary<string, object>();

            foreach (string key in this.variables.Keys)
            {
                if (this.persisted.Contains(key))
                {
                    result.Add(key, this.variables[key]);
                }
            }

            this.variables = result;
        }

        /// <summary>
        /// The get_ variable exists.
        /// </summary>
        /// <param name="name">
        /// The name.
        /// </param>
        /// <returns>
        /// The get_ variable exists.
        /// </returns>
        public bool get_VariableExists(string name)
        {
            return this.variables.ContainsKey(name);
        }

        /// <summary>
        /// The get_ variable persists.
        /// </summary>
        /// <param name="variableName">
        /// The variable name.
        /// </param>
        /// <returns>
        /// The get_ variable persists.
        /// </returns>
        public bool get_VariablePersists(string variableName)
        {
            return this.persisted.Contains(variableName);
        }

        /// <summary>
        /// The set_ variable persists.
        /// </summary>
        /// <param name="variableName">
        /// The variable name.
        /// </param>
        /// <param name="persistVariable">
        /// The p val.
        /// </param>
        public void set_VariablePersists(string variableName, bool persistVariable)
        {
            if (persistVariable)
            {
                if (!this.persisted.Contains(variableName))
                {
                    this.persisted.Add(variableName);
                }
            }
            else
            {
                this.persisted.Remove(variableName);
            }
        }
    }
}