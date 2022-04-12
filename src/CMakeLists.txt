
include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(libcosim_consumer SHARED consumer.cpp)
add_library(libcosim_consumer::consumer ALIAS libcosim_consumer)
target_compile_features(libcosim_consumer PUBLIC "cxx_std_17")

target_include_directories(libcosim_consumer
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries(libcosim_consumer PRIVATE libcosim::cosim)
target_compile_definitions(libcosim_consumer PUBLIC "BOOST_CONFIG_SUPPRESS_OUTDATED_MESSAGE=1")

set_target_properties(libcosim_consumer
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )
