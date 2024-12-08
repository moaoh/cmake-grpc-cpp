#include "client.hpp"

// gRPC
int main() {
    std::string target_str = "localhost:50051";
    std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials());
    std::unique_ptr<SampleService::Stub> stub = SampleService::NewStub(channel);

    // 요청 메시지 생성
    SampleRequest request;
    request.set_name("World");

    // 응답 메시지 생성
    SampleResponse response;

    // gRPC 호출
    grpc::ClientContext context;
    grpc::Status status = stub->SayHello(&context, request, &response);

    if (status.ok()) {
        std::cout << "Server response: " << response.message() << std::endl;
    } else {
        std::cout << "RPC failed" << std::endl;
    }

    return 0;
}