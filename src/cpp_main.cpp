
#include <iostream>
#include <cse/execution.hpp>
#include <cse/algorithm.hpp>

int main() {
    
    auto execution = std::make_shared<cse::execution>(cse::to_time_point(0.0), std::make_unique<cse::fixed_step_algorithm>(cse::to_duration(1.0/100)));

    return 0;
}