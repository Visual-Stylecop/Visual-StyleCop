// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockDTESolution.cs" company="http://stylecop.codeplex.com">
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
//   The mock dte solution.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections;

    using EnvDTE;

    /// <summary>
    /// The mock dte solution.
    /// </summary>
    internal class MockDTESolution : EnvDTE.Solution
    {
        private readonly MockDTEProjects projects;

        private readonly IServiceProvider serviceProvider;

        /// <summary>
        /// Initializes a new instance of the <see cref="MockDTESolution"/> class.
        /// </summary>
        /// <param name="serviceProvider">
        /// The service provider.
        /// </param>
        public MockDTESolution(IServiceProvider serviceProvider)
        {
            this.serviceProvider = serviceProvider;
            this.projects = new MockDTEProjects(this.serviceProvider);
        }

        /// <summary>
        /// Gets AddIns.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public AddIns AddIns
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets Count.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public int Count
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets DTE.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public DTE DTE
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets ExtenderCATID.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public string ExtenderCATID
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets ExtenderNames.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public object ExtenderNames
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets FileName.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public string FileName
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets FullName.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public string FullName
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets Globals.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public Globals Globals
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets or sets a value indicating whether IsDirty.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        /// <exception cref="Exception">
        /// </exception>
        public bool IsDirty
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }

            set
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets a value indicating whether IsOpen.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public bool IsOpen
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets Parent.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public DTE Parent
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets Projects.
        /// </summary>
        public Projects Projects
        {
            get
            {
                return this.projects;
            }
        }

        /// <summary>
        /// Gets Properties.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public Properties Properties
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets or sets a value indicating whether Saved.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        /// <exception cref="Exception">
        /// </exception>
        public bool Saved
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }

            set
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// Gets SolutionBuild.
        /// </summary>
        /// <exception cref="Exception">
        /// </exception>
        public SolutionBuild SolutionBuild
        {
            get
            {
                throw new Exception("The method or operation is not implemented.");
            }
        }

        /// <summary>
        /// The add from file.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <param name="exclusive">
        /// The exclusive.
        /// </param>
        /// <returns>
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public Project AddFromFile(string fileName, bool exclusive)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The add from template.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <param name="destination">
        /// The destination.
        /// </param>
        /// <param name="projectName">
        /// The project name.
        /// </param>
        /// <param name="exclusive">
        /// The exclusive.
        /// </param>
        /// <returns>
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public Project AddFromTemplate(string fileName, string destination, string projectName, bool exclusive)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The close.
        /// </summary>
        /// <param name="saveFirst">
        /// The save first.
        /// </param>
        /// <exception cref="Exception">
        /// </exception>
        public void Close(bool saveFirst)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The create.
        /// </summary>
        /// <param name="destination">
        /// The destination.
        /// </param>
        /// <param name="name">
        /// The name.
        /// </param>
        /// <exception cref="Exception">
        /// </exception>
        public void Create(string destination, string name)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The find project item.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <returns>
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public ProjectItem FindProjectItem(string fileName)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The get enumerator.
        /// </summary>
        /// <returns>
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public IEnumerator GetEnumerator()
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The item.
        /// </summary>
        /// <param name="index">
        /// The index.
        /// </param>
        /// <returns>
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public Project Item(object index)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The open.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <exception cref="Exception">
        /// </exception>
        public void Open(string fileName)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The project items template path.
        /// </summary>
        /// <param name="projectKind">
        /// The project kind.
        /// </param>
        /// <returns>
        /// The project items template path.
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public string ProjectItemsTemplatePath(string projectKind)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The remove.
        /// </summary>
        /// <param name="proj">
        /// The proj.
        /// </param>
        /// <exception cref="Exception">
        /// </exception>
        public void Remove(Project proj)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The save as.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <exception cref="Exception">
        /// </exception>
        public void SaveAs(string fileName)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The get_ extender.
        /// </summary>
        /// <param name="extenderName">
        /// The extender name.
        /// </param>
        /// <returns>
        /// The get_ extender.
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public object get_Extender(string extenderName)
        {
            throw new Exception("The method or operation is not implemented.");
        }

        /// <summary>
        /// The get_ template path.
        /// </summary>
        /// <param name="projectType">
        /// The project type.
        /// </param>
        /// <returns>
        /// The get_ template path.
        /// </returns>
        /// <exception cref="Exception">
        /// </exception>
        public string get_TemplatePath(string projectType)
        {
            throw new Exception("The method or operation is not implemented.");
        }
    }
}