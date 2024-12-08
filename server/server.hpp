#pragma once

#include <memory>
#include <iostream>

#include "sample.grpc.pb.h"
#include <grpc++/grpc++.h>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using sample::SampleRequest;
using sample::SampleResponse;
using sample::SampleService;
