// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockDTEProjects.cs" company="http://stylecop.codeplex.com">
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
//   The mock dte projects.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections;
    using System.Collections.Generic;

    using EnvDTE;

    using Microsoft.VisualStudio.Shell.Interop;

    /// <summary>
    /// The mock dte projects.
    /// </summary>
    internal class MockDTEProjects : EnvDTE.Projects
    {
        private readonly Dictionary<string, MockDTEProject> projects = new Dictionary<string, MockDTEProject>();

        private readonly IServiceProvider serviceProvider;

        /// <summary>
        /// Initializes a new instance of the <see cref="MockDTEProjects"/> class.
        /// </summary>
        /// <param name="serviceProvider">
        /// The service provider.
        /// </param>
        public MockDTEProjects(IServiceProvider serviceProvider)
        {
            this.serviceProvider = serviceProvider;
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
        /// The get enumerator.
        /// </summary>
        /// <returns>
        /// The enumerator for <see cref="MockDTEProject"/>.
        /// </returns>
        public IEnumerator GetEnumerator()
        {
            MockSolution solution = this.serviceProvider.GetService(typeof(SVsSolution)) as MockSolution;
            foreach (MockIVsProject project in solution.Projects)
            {
                if (!this.projects.ContainsKey(project.FullPath))
                {
                    this.projects.Add(project.FullPath, new MockDTEProject(project));
                }

                yield return this.projects[project.FullPath];
            }
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
        public Project Item(object index)
        {
            return Utilities.ListFromEnum(this.projects.Values)[(int)index];
        }
    }
}