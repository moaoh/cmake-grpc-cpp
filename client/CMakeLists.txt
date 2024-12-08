project(client)

add_executable(client
        client.cpp
)

target_link_libraries(client
        sample_grpc_proto
)

add_custom_command(TARGET client POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/bin
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:client> ${CMAKE_SOURCE_DIR}/bin
)