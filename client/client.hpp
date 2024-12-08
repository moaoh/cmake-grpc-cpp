#pragma once

#include <memory>
#include <iostream>

#include "sample.grpc.pb.h"
#include <grpc++/grpc++.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using sample::SampleRequest;
using sample::SampleResponse;
using sample::SampleService;