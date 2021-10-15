#include "epiHelpers.h"

#include <fmt/core.h>
#include <array>

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
    
} // namespace epi
