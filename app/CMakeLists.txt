
add_executable(cpp_main cpp_main.cpp)
target_link_libraries(cpp_main PRIVATE cseconsumer::cseconsumer)

set_target_properties(cpp_main
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )
