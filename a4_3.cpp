// 4.3

#include <fmt/core.h>

void swap_bits(unsigned long long& bit_array, int x, int y)
{
    if (((bit_array >> x) & 1) != ((bit_array >> y) & 1))
    {
        long long bit_mask = (1ULL << x) | (1ULL << y);
        bit_array ^= bit_mask;
    }
}

void reverse_64_bit_word(unsigned long long& bit_array)
{
    for (int i = 0, j = 63; i <= 31; ++i, --j)
    {
        swap_bits(bit_array, i, j);
    }
}

int main()
{
    unsigned long long bit_array = 71ULL;

    fmt::print(fmt::format("bit_array: {0:b}\n", bit_array));
    reverse_64_bit_word(bit_array);
    fmt::print(fmt::format(" reversed: {0:b}\n\n", bit_array));
}
