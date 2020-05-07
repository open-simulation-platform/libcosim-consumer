
include_directories(../include)

add_library(cseconsumer SHARED consumer.cpp)
add_library(cseconsumer::cseconsumer ALIAS cseconsumer)
target_compile_features(cseconsumer PUBLIC "cxx_std_17")

target_include_directories(cseconsumer
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries(cseconsumer PRIVATE csecore::csecorecpp)
target_compile_definitions(cseconsumer PUBLIC "BOOST_CONFIG_SUPPRESS_OUTDATED_MESSAGE=1")

set_target_properties(cseconsumer
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )
