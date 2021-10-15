#pragma once

#include <vector>
#include <queue>

#include <string>

namespace epi {

    int dstring_to_vec(const std::string& s, std::vector<int>& v);

    int print_priority_queue_less(std::priority_queue<int, std::vector<int>, std::less<int>> pql);
    int print_priority_queue_greater(std::priority_queue<int, std::vector<int>, std::greater<int>> pqg);
} // namespace epi
