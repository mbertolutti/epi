// 4.2

#include <fmt/core.h>
#include <cassert>

long swap_bits(long long bits, int x, int y)
{
    if (((bits >> x) & 1) != ((bits >> y) & 1))
    {
        long long bit_mask = (1LL << x) | (1LL << y);
        bits ^= bit_mask;
    }
    return bits;
}

int main()
{
    long long bit_array = 71;
    int x = 2;
    int y = 4;

    assert(x <= 63);
    assert(y <= 63);

    fmt::print(fmt::format("bit_array: {0:b}\nswapped:   {1:b}\n\n", bit_array, swap_bits(bit_array, x, y)));
}
