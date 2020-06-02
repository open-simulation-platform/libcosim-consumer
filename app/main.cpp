
#include "consumer.hpp"

#include <iostream>

int main()
{
    auto consumer = example::consumer();
    auto execution = consumer.create_execution();

    std::cout << "success" << std::endl;

    return 0;
}