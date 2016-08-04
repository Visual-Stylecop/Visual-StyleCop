// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockDTE.cs" company="http://stylecop.codeplex.com">
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
//   The mock dte.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;

    using EnvDTE;

    /// <summary>
    /// The mock dte.
    /// </summary>
    internal class MockDTE : EnvDTE.DTE
    {
        private readonly MockEvents events = new MockEvents();

        private readonly IServiceProvider serviceProvider;

        private readonly MockDTESolution solution;

        private readonly MockDocuments documents;

        /// <summary>
        /// Initializes a new instance of the <see cref="MockDTE"/> class.
        /// </summary>
        /// <param name="serviceProvider">
        /// The service provider.
        /// </param>
        public MockDTE(IServiceProvider serviceProvider)
        {
            this.serviceProvider = serviceProvider;
            this.solution = new MockDTESolution(this.serviceProvider);
            this.documents = new MockDocuments(this);
        }

        /// <summary>
        /// Gets ActiveDocument.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Document ActiveDocument
        {
            get
            {
                return new MockDocument();
            }
        }

        /// <summary>
        /// Gets ActiveSolutionProjects.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object ActiveSolutionProjects
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ActiveWindow.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Window ActiveWindow
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets AddIns.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public AddIns AddIns
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Application.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public DTE Application
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets CommandBars.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object CommandBars
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets CommandLineArguments.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string CommandLineArguments
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Commands.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Commands Commands
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ContextAttributes.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ContextAttributes ContextAttributes
        {
            get
            {
                throw new NotImplementedException();
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
        /// Gets Debugger.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Debugger Debugger
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets or sets DisplayMode.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public vsDisplay DisplayMode
        {
            get
            {
                throw new NotImplementedException();
            }

            set
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Documents.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Documents Documents
        {
            get
            {
                return this.documents;
            }
        }

        /// <summary>
        /// Gets Edition.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string Edition
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Events.
        /// </summary>
        public Events Events
        {
            get
            {
                return this.events;
            }
        }

        /// <summary>
        /// Gets FileName.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string FileName
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Find.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Find Find
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets FullName.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string FullName
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Globals.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Globals Globals
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ItemOperations.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ItemOperations ItemOperations
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets LocaleID.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int LocaleID
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Macros.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Macros Macros
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets MacrosIDE.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public DTE MacrosIDE
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets MainWindow.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Window MainWindow
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Mode.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public vsIDEMode Mode
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Name.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string Name
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ObjectExtenders.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ObjectExtenders ObjectExtenders
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets RegistryRoot.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string RegistryRoot
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets SelectedItems.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public SelectedItems SelectedItems
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Solution.
        /// </summary>
        public Solution Solution
        {
            get
            {
                return this.solution;
            }
        }

        /// <summary>
        /// Gets SourceControl.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public SourceControl SourceControl
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets StatusBar.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public StatusBar StatusBar
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets or sets a value indicating whether SuppressUI.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public bool SuppressUI
        {
            get
            {
                throw new NotImplementedException();
            }

            set
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets UndoContext.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public UndoContext UndoContext
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets or sets a value indicating whether UserControl.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public bool UserControl
        {
            get
            {
                throw new NotImplementedException();
            }

            set
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Version.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string Version
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets WindowConfigurations.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public WindowConfigurations WindowConfigurations
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets or sets Windows.
        /// </summary>
        public Windows Windows { get; set; }

        /// <summary>
        /// The execute command.
        /// </summary>
        /// <param name="commandName">
        /// The command name.
        /// </param>
        /// <param name="commandArgs">
        /// The command args.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void ExecuteCommand(string commandName, string commandArgs)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get object.
        /// </summary>
        /// <param name="name">
        /// The name.
        /// </param>
        /// <returns>
        /// The get object.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object GetObject(string name)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The launch wizard.
        /// </summary>
        /// <param name="file">
        /// The vsz file.
        /// </param>
        /// <param name="contextParams">
        /// The context params.
        /// </param>
        /// <returns>
        /// The wizard result.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public wizardResult LaunchWizard(string file, ref object[] contextParams)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The open file.
        /// </summary>
        /// <param name="viewKind">
        /// The view kind.
        /// </param>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <returns>
        /// The window.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Window OpenFile(string viewKind, string fileName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The quit.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Quit()
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The satellite dll path.
        /// </summary>
        /// <param name="path">
        /// The path.
        /// </param>
        /// <param name="name">
        /// The name.
        /// </param>
        /// <returns>
        /// The satellite path.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string SatelliteDllPath(string path, string name)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets is open file.
        /// </summary>
        /// <param name="viewKind">
        /// The view kind.
        /// </param>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <returns>
        /// The is open file value.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public bool get_IsOpenFile(string viewKind, string fileName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets properties.
        /// </summary>
        /// <param name="category">
        /// The category.
        /// </param>
        /// <param name="page">
        /// The page.
        /// </param>
        /// <returns>
        /// The properties
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Properties get_Properties(string category, string page)
        {
            throw new NotImplementedException();
        }
    }
}