
#include <iostream>
#include <cse.h>

namespace {

    constexpr double sec2nano = 1e9;

    cse_time_point to_cse_time_point(const double time_point) {
        return static_cast<cse_time_point>(time_point * sec2nano);
    }

    cse_duration to_cse_duration(const double duration) {
        return static_cast<cse_duration>(duration * sec2nano);
    }

}

int main() {

    cse_execution* execution = cse_execution_create(to_cse_time_point(0.0), to_cse_duration(1.0/100));
    cse_execution_destroy(execution);

    return 0;
}