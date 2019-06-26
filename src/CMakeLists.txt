
add_executable(c_main c_main.cpp)
target_link_libraries(c_main
        PUBLIC
        csecore::csecorec
        )

add_executable(cpp_main cpp_main.cpp)
target_link_libraries(cpp_main
        PUBLIC
        csecore::csecorecpp
        )
