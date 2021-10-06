// 4.1

#include <fmt/core.h>
#include <cassert>

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

    fmt::print("parity of {} is {}\n\n", number, parity(number), "\n\n");
}
