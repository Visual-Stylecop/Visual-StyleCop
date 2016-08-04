﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockWindows.cs" company="http://stylecop.codeplex.com">
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
//   The mock windows.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections;

    using EnvDTE;

    /// <summary>
    /// The mock windows.
    /// </summary>
    internal class MockWindows : EnvDTE.Windows
    {
        /// <summary>
        /// Gets Count.
        /// </summary>
        public int Count
        {
            get
            {
                return 0;
            }
        }

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
        public DTE Parent
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// The create linked window frame.
        /// </summary>
        /// <param name="Window1">
        /// The window 1.
        /// </param>
        /// <param name="Window2">
        /// The window 2.
        /// </param>
        /// <param name="Link">
        /// The link.
        /// </param>
        /// <returns>
        /// The window.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Window CreateLinkedWindowFrame(Window Window1, Window Window2, vsLinkedWindowType Link)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The create tool window.
        /// </summary>
        /// <param name="AddInInst">
        /// The add in inst.
        /// </param>
        /// <param name="ProgID">
        /// The prog id.
        /// </param>
        /// <param name="Caption">
        /// The caption.
        /// </param>
        /// <param name="GuidPosition">
        /// The guid position.
        /// </param>
        /// <param name="DocObj">
        /// The doc obj.
        /// </param>
        /// <returns>
        /// The window.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Window CreateToolWindow(AddIn AddInInst, string ProgID, string Caption, string GuidPosition, ref object DocObj)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets enumerator.
        /// </summary>
        /// <returns>
        /// The enumerator
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public IEnumerator GetEnumerator()
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The item.
        /// </summary>
        /// <param name="index">
        /// The index.
        /// </param>
        /// <returns>
        /// The window.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Window Item(object index)
        {
            throw new NotImplementedException();
        }
    }
}