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
        /// Gets Count.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int Count
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
        /// Gets ExtenderCATID.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string ExtenderCATID
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ExtenderNames.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object ExtenderNames
        {
            get
            {
                throw new NotImplementedException();
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
        /// Gets or sets a value indicating whether IsDirty.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public bool IsDirty
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
        /// Gets a value indicating whether IsOpen.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public bool IsOpen
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
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Properties Properties
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets or sets a value indicating whether Saved.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public bool Saved
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
        /// Gets SolutionBuild.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public SolutionBuild SolutionBuild
        {
            get
            {
                throw new NotImplementedException();
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
        /// The project.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Project AddFromFile(string fileName, bool exclusive)
        {
            throw new NotImplementedException();
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
        /// The project.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Project AddFromTemplate(string fileName, string destination, string projectName, bool exclusive)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The close.
        /// </summary>
        /// <param name="saveFirst">
        /// The save first.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Close(bool saveFirst)
        {
            throw new NotImplementedException();
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
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Create(string destination, string name)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The find project item.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <returns>
        /// The project item.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ProjectItem FindProjectItem(string fileName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The get enumerator.
        /// </summary>
        /// <returns>
        /// The IEnumerator.
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
        /// The project.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Project Item(object index)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The open.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Open(string fileName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the project items template path.
        /// </summary>
        /// <param name="projectKind">
        /// The project kind.
        /// </param>
        /// <returns>
        /// The project items template path.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string ProjectItemsTemplatePath(string projectKind)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The remove.
        /// </summary>
        /// <param name="proj">
        /// The proj.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Remove(Project proj)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The save as.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void SaveAs(string fileName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the extender.
        /// </summary>
        /// <param name="extenderName">
        /// The extender name.
        /// </param>
        /// <returns>
        /// The extender object.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object get_Extender(string extenderName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the template path.
        /// </summary>
        /// <param name="projectType">
        /// The project type.
        /// </param>
        /// <returns>
        /// The template path.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string get_TemplatePath(string projectType)
        {
            throw new NotImplementedException();
        }
    }
}