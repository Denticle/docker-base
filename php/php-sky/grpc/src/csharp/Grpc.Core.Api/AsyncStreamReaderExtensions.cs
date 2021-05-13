#region Copyright notice and license

// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#endregion

using System;
using System.Threading;
using System.Threading.Tasks;

namespace Grpc.Core
{
    /// <summary>
    /// Extension methods for <see cref="IAsyncStreamReader{T}"/>.
    /// </summary>
    public static class AsyncStreamReaderExtensions
    {
        /// <summary>
        /// Advances the stream reader to the next element in the sequence, returning the result asynchronously.
        /// </summary>
        /// <typeparam name="T">The message type.</typeparam>
        /// <param name="streamReader">The stream reader.</param>
        /// <returns>
        /// Task containing the result of the operation: true if the reader was successfully advanced
        /// to the next element; false if the reader has passed the end of the sequence.
        /// </returns>
        public static Task<bool> MoveNext<T>(this IAsyncStreamReader<T> streamReader)
            where T : class
        {
            if (streamReader == null)
            {
                throw new ArgumentNullException(nameof(streamReader));
            }

            return streamReader.MoveNext(CancellationToken.None);
        }
    }
}
