
#ifndef CSECONSUMER_CONSUMER_HPP
#define CSECONSUMER_CONSUMER_HPP

#include <cse/execution.hpp>

namespace cse
{

class consumer
{

public:
    std::shared_ptr<cse::execution> create_execution();
};

} // namespace cse

#endif //CSECONSUMER_CONSUMER_HPP
