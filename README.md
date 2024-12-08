# cmake gRPC cpp sample

cpp에서 cmake와 `gRPC`를 사용하는 간단한 sample code입니다.

## Preview

<img width="600" alt="image" src="https://github.com/user-attachments/assets/100112a5-5818-4336-b2cf-e63a5848fcea">

## Build and Run

#### 1. gRPC 및 Protobuf 설치

`gRPC`와 `protobuf`를 설치해야 합니다. macOS에서는 `Homebrew`를 이용해 손쉽게 설치할 수 있습니다:

   ```bash
   brew install grpc protobuf
   ```

#### 2. 빌드 디렉토리 생성 및 프로젝트 빌드:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

#### 3. 실행:

   두 개의 `bash`창을 열고 각각 서버와 클라이언트를 실행합니다:
   
   **server 실행**
   ```bash
   cd ../bin
   ./server
   ```

   **client 실행**
   ```bash
   cd ../bin
   ./client
   ```

## Project Directory Structure

```
.
├── CMakeLists.txt          # CMake 빌드 설정 파일
├── client                  # 클라이언트 코드
│   ├── CMakeLists.txt      # 클라이언트 CMake 설정
│   ├── client.cpp          # 클라이언트 구현 파일
│   └── client.hpp          # 클라이언트 헤더 파일
├── common                  # 공통 코드
│   └── CMakeLists.txt      # 공통 CMake 설정
├── protos                  # gRPC 프로토콜 정의
│   └── sample.proto        # 프로토콜 정의 파일
└── server                  # 서버 코드
    ├── CMakeLists.txt      # 서버 CMake 설정
    ├── server.cpp          # 서버 구현 파일
    └── server.hpp          # 서버 헤더 파일
```

## Additional Notes

- 이 샘플은 기본적인 `gRPC` 서버와 클라이언트를 구현하고 있으며, 실제 응용 프로그램에 맞게 확장 가능합니다.
- `Protobuf`와 `gRPC`의 설치가 완료되지 않으면, 빌드 및 실행 과정에서 오류가 발생할 수 있습니다.
