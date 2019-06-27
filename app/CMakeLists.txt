
add_executable(c_main c_main.cpp)
target_link_libraries(c_main PRIVATE csecore::csecorec)

add_executable(cpp_main cpp_main.cpp)
target_link_libraries(cpp_main PRIVATE cseconsumer::cseconsumer)

set_target_properties( c_main cpp_main
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )
