
add_executable(c_main c_main.cpp)
target_link_libraries(c_main PRIVATE csecore::csecorec)

add_executable(cpp_main cpp_main.cpp)
target_link_libraries(cpp_main PRIVATE cseconsumer::cseconsumer)

install(TARGETS c_main DESTINATION bin)
install(TARGETS cpp_main DESTINATION bin)
