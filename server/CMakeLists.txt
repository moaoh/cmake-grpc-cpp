project(server)

add_executable(server
        server.cpp
)

target_link_libraries(server
        sample_grpc_proto
)

add_custom_command(TARGET server POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/bin
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:server> ${CMAKE_SOURCE_DIR}/bin
)