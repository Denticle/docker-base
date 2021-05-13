/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GRPC_RB_CREDENTIALS_H_
#define GRPC_RB_CREDENTIALS_H_

#include <ruby/ruby.h>

#include <grpc/grpc_security.h>

/* Initializes the ruby ChannelCredentials class. */
void Init_grpc_channel_credentials();

/* Gets the wrapped credentials from the ruby wrapper */
grpc_channel_credentials* grpc_rb_get_wrapped_channel_credentials(VALUE v);

#endif /* GRPC_RB_CREDENTIALS_H_ */
