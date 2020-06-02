
#ifndef LIBCOSIM_CONSUMER_CONSUMER_HPP
#define LIBCOSIM_CONSUMER_CONSUMER_HPP

#include <cosim/execution.hpp>

#include <memory>

namespace example
{

class consumer
{

public:
    std::shared_ptr<cosim::execution> create_execution();
};

} // namespace example

#endif //LIBCOSIM_CONSUMER_CONSUMER_HPP
