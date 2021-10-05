// 4.1

#include <fmt/core.h>
#include <cassert>
#include <climits>

int parity(int number)
{
    int result = 0;
    while (number)
    {
        result ^= (number & 1);
        number >>= 1;
    }
    return result;
}

int main()
{
    int number = 1010101001;

    assert(number <= INT_MAX);

    fmt::print("parity of {} is {}\n\n", number, parity(number), "\n\n");
}
