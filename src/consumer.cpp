
#include "../include/consumer.hpp"

#include <cse/algorithm.hpp>

namespace cse
{

std::shared_ptr<cse::execution> consumer::create_execution()
{
    const auto t0 = cse::to_time_point(0.0);
    auto algorithm = std::make_unique<cse::fixed_step_algorithm>(cse::to_duration(1.0 / 100));
    return std::make_shared<cse::execution>(t0, std::move(algorithm));
}

} // namespace cse
