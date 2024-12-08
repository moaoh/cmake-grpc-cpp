# cmake grpc cpp sample

cpp에서 cmake와 grpc를 사용하는 간단한 sample code입니다.

## Table Of Contents
1. [Preview](#preview)
2. [Build and Run](#build-and-run)

## Preview

![Screenshot20241209at003544.png](assets/Screenshot 2024-12-09 at 00.35.44.png)


## Build and Run


1. grpc 및 protobuf 설치:

   ```bash
   brew install grpc protobuf
   ```

   grpc 및 protobuf 설치

2. 빌드 디렉토리 생성 및 프로젝트 빌드:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. 실행:

   ```bash
   # bash1
   cd ../bin
   ./server

   # bash1
   cd ../bin
   ./client
   ```

   2개의 bash를 사용하여 server 및 client를 실행