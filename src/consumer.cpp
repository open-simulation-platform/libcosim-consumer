
#include "../include/consumer.hpp"

#include <cse/algorithm.hpp>

std::shared_ptr<cse::execution> cse::consumer::create_execution()
{
    return std::make_shared<cse::execution>(cse::to_time_point(0.0), std::make_unique<cse::fixed_step_algorithm>(cse::to_duration(1.0 / 100)));
}
