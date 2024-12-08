#include "server.hpp"

// gRPC
class SampleServiceImpl final : public SampleService::Service {
public:
    grpc::Status SayHello(grpc::ServerContext* context, const SampleRequest* request, SampleResponse* response) override {
        std::string name = request->name();
        response->set_message("Hello, " + name + "!");
        return grpc::Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    SampleServiceImpl service;

    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}