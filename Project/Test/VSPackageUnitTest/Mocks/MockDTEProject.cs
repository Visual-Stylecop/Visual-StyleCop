// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockDTEProject.cs" company="http://stylecop.codeplex.com">
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
//   The mock dte project.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;

    using EnvDTE;

    /// <summary>
    /// The mock dte project.
    /// </summary>
    internal class MockDTEProject : EnvDTE.Project
    {
        private readonly MockDTEGlobals globals = new MockDTEGlobals();

        private readonly MockIVsProject project;

        /// <summary>
        /// Initializes a new instance of the <see cref="MockDTEProject"/> class.
        /// </summary>
        /// <param name="project">
        /// The project.
        /// </param>
        public MockDTEProject(MockIVsProject project)
        {
            this.project = project;
        }

        /// <summary>
        /// Gets CodeModel.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public CodeModel CodeModel
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets Collection.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public Projects Collection
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ConfigurationManager.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ConfigurationManager ConfigurationManager
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
        public string FileName
        {
            get
            {
                return this.project.FullPath;
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
        public Globals Globals
        {
            get
            {
                return this.globals;
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
        /// Gets Kind.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string Kind
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets or sets Name.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string Name
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
        /// Gets Object.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object Object
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ParentProjectItem.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ProjectItem ParentProjectItem
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// Gets ProjectItems.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public ProjectItems ProjectItems
        {
            get
            {
                throw new NotImplementedException();
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
        /// Gets UniqueName.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public string UniqueName
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// The delete.
        /// </summary>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Delete()
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The save.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void Save(string fileName)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The save as.
        /// </summary>
        /// <param name="NewFileName">
        /// The new file name.
        /// </param>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public void SaveAs(string NewFileName)
        {
            throw new NotImplementedException();
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
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public object get_Extender(string extenderName)
        {
            throw new NotImplementedException();
        }
    }
}