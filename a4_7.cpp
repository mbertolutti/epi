// 4.7

#include <fmt/core.h>
#include <cassert>

double my_pow(double x, int y)
{
    if (y > 1)
    {
        return x * my_pow(x, y - 1);
    } else
    {
        return x;
    }
}

int main()
{
    double x = 2;
    int y = 3;

    assert(x >= 1);
    assert(y >= 0);

    fmt::print("pow({}, {}): {}\n\n", x, y, my_pow(x, y));
}
