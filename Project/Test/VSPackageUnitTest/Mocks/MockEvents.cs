// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockEvents.cs" company="http://stylecop.codeplex.com">
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
//   The mock events.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;

    using EnvDTE;

    /// <summary>
    /// The mock events.
    /// </summary>
    internal class MockEvents : EnvDTE.Events
    {
        private readonly MockBuildEvents buildEvents = new MockBuildEvents();

        /// <summary>
        /// Gets BuildEvents.
        /// </summary>
        public BuildEvents BuildEvents
        {
            get
            {
                return this.buildEvents;
            }
        }

        /// <summary>
        /// Gets DTEEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public DTEEvents DTEEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets DebuggerEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public DebuggerEvents DebuggerEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets FindEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public FindEvents FindEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets MiscFilesEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ProjectItemsEvents MiscFilesEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets SelectionEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public SelectionEvents SelectionEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets SolutionEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public SolutionEvents SolutionEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets SolutionItemsEvents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ProjectItemsEvents SolutionItemsEvents
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// The get object.
        /// </summary>
        /// <param name="Name">
        /// The name.
        /// </param>
        /// <returns>
        /// The object value.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object GetObject(string Name)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ command bar events.
        /// </summary>
        /// <param name="CommandBarControl">
        /// The command bar control.
        /// </param>
        /// <returns>
        /// The command bar events object.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object get_CommandBarEvents(object CommandBarControl)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ command events.
        /// </summary>
        /// <param name="Guid">
        /// The guid.
        /// </param>
        /// <param name="ID">
        /// The id.
        /// </param>
        /// <returns>
        /// The command events.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public CommandEvents get_CommandEvents(string Guid, int ID)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ document events.
        /// </summary>
        /// <param name="Document">
        /// The document.
        /// </param>
        /// <returns>
        /// The document events.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public DocumentEvents get_DocumentEvents(Document Document)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ output window events.
        /// </summary>
        /// <param name="Pane">
        /// The pane.
        /// </param>
        /// <returns>
        /// The output window events.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public OutputWindowEvents get_OutputWindowEvents(string Pane)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ task list events.
        /// </summary>
        /// <param name="Filter">
        /// The filter.
        /// </param>
        /// <returns>
        /// The task list events.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public TaskListEvents get_TaskListEvents(string Filter)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ text editor events.
        /// </summary>
        /// <param name="TextDocumentFilter">
        /// The text document filter.
        /// </param>
        /// <returns>
        /// The text editor events.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public TextEditorEvents get_TextEditorEvents(TextDocument TextDocumentFilter)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get_ window events.
        /// </summary>
        /// <param name="WindowFilter">
        /// The window filter.
        /// </param>
        /// <returns>
        /// The Window events.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public WindowEvents get_WindowEvents(Window WindowFilter)
        {
            throw new NotImplementedException();
        }
    }
}