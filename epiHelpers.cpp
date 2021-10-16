#include "epiHelpers.h"

#include <array>
#include <queue>

#include <fmt/core.h>

namespace epi
{

const int mult[] =
{
    1000000000, // 0
    100000000,  // 9
    10000000,   // 8
    1000000,    // 7
    100000,     // 6
    10000,      // 5
    1000,       // 4
    100,        // 3
    10,         // 2
    1           // 1
}; 

int dstring_to_vec(const std::string& input_string, std::vector<int>& vec)
{
    for (std::string::const_iterator it = input_string.cbegin() ; it != input_string.cend(); ++it)
    {
        if (*it == 'd')
        {
            ++it;
            int current_number = 0;
            for (int i = 10 - (static_cast<int>(*it) - 48); i <= 9; ++i)
            {
                ++it;
                current_number += (static_cast<int>(*it) - 48) * mult[i];
            }
            vec.push_back(current_number);
        } else
        {
            vec.push_back(*it - 48);
        }
    }
    return 0;
}

int print_priority_queue_less(std::priority_queue<int, std::vector<int>, std::less<int>> pql)
{
    fmt::print("priority queue 'less / max heap': ");
    while (!pql.empty())
    {
        fmt::print("{} ", pql.top());
        pql.pop();
    }
    fmt::print("\n\n");
    return 0;
}

int print_priority_queue_greater(std::priority_queue<int, std::vector<int>, std::greater<int>> pqg)
{
    fmt::print("priority queue 'greater / min heap': ");
    while (!pqg.empty())
    {
        fmt::print("{} ", pqg.top());
        pqg.pop();
    }
    fmt::print("\n\n");
    return 0;
}
    
} // namespace epi
