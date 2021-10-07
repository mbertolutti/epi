// 5.2

#include <fmt/core.h>
#include <fmt/ranges.h>
#include <vector>

std::vector<int> inc_dec_array_val(std::vector<int> vec)
{
    int carry = 1;
    for (std::vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit)
    {
        int cur = *rit + carry;
        if (cur <= 9)
        {
            *rit = cur;
            carry = 0;
            break;
        }
        else
        {
            *rit = 0;
            carry = 1;
        }
    }
    if (carry)
    {
        vec.insert(vec.begin(), carry);
    }
    return vec;
}

int main()
{
    std::vector<int> vec {9, 9, 9};
    fmt::print("vec: {}\ninc: {}\n\n", fmt::join(vec, ", "), fmt::join(inc_dec_array_val(vec), ", "));
}
