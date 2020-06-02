
#include "../include/consumer.hpp"

#include <cosim/algorithm.hpp>

namespace example
{

std::shared_ptr<cosim::execution> consumer::create_execution()
{
    const auto t0 = cosim::to_time_point(0.0);
    auto algorithm = std::make_unique<cosim::fixed_step_algorithm>(cosim::to_duration(1.0 / 100));
    return std::make_shared<cosim::execution>(t0, std::move(algorithm));
}

} // namespace example
