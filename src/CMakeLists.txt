
include_directories(../include)

add_library(cseconsumer consumer.cpp)
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

install(
        TARGETS cseconsumer
        EXPORT "${CSECONSUMER_EXPORT_TARGET}"
        ${CSECONSUMER_INSTALL_DESTINATIONS}
)
