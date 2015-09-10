// --------------------------------------------------------------------------------------------------------------------
// <copyright file="StyleCopException.cs" company="http://stylecop.codeplex.com">
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
//   An exception generated by StyleCop.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop
{
    using System;
    using System.Diagnostics.CodeAnalysis;
    using System.Runtime.Serialization;

    /// <summary>
    /// An exception generated by StyleCop.
    /// </summary>
    [Serializable]
    [SuppressMessage("Microsoft.Naming", "CA1702:CompoundWordsShouldBeCasedCorrectly", MessageId = "StyleCop", Justification = "This is the correct casing.")]
    public sealed class StyleCopException : Exception
    {
        #region Constructors and Destructors

        /// <summary>
        /// Initializes a new instance of the StyleCopException class.
        /// </summary>
        public StyleCopException()
            : base(Strings.InternalError)
        {
        }

        /// <summary>
        /// Initializes a new instance of the StyleCopException class.
        /// </summary>
        /// <param name="message">
        /// The error message that explains the reason for the exception.
        /// </param>
        public StyleCopException(string message)
            : base(message)
        {
            Param.Ignore(message);
        }

        /// <summary>
        /// Initializes a new instance of the StyleCopException class.
        /// </summary>
        /// <param name="message">
        /// The error message that explains the reason for the exception.
        /// </param>
        /// <param name="innerException">
        /// The exception that is the cause of the current exception. 
        /// If the innerException parameter is not a null reference, the current exception is raised 
        /// in a catch block that handles the inner exception.
        /// </param>
        public StyleCopException(string message, Exception innerException)
            : base(message, innerException)
        {
            Param.Ignore(message, innerException);
        }

        /// <summary>
        /// Initializes a new instance of the StyleCopException class.
        /// </summary>
        /// <param name="serializationInfo">
        /// Holds the serialization info about the exception.
        /// </param>
        /// <param name="streamingContext">
        /// Holds contextual information.
        /// </param>
        private StyleCopException(SerializationInfo serializationInfo, StreamingContext streamingContext)
            : base(serializationInfo, streamingContext)
        {
            Param.Ignore(serializationInfo, streamingContext);
        }

        #endregion
    }
}