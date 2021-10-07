// 5.1

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>
#include <array>

std::array<int, 10> partition(std::array<int, 10> arr)
{
    size_t j = 0;
    size_t k = arr.size() - 1;
    for (size_t i = 0; i <= k;)
    {
        switch (arr[i])
        {
            int tmp;
            case 1:
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
                ++j;
                ++i;
            break;
            case 2:
                ++i;
            break;
            case 3:
                tmp = arr[k];
                arr[k] = arr[i];
                arr[i] = tmp;
                --k;
            break;
        }
    }
    return arr;
}

int main()
{
    std::array<int, 10> arr {3, 2, 1, 1, 2, 3, 3, 1, 2, 2};
    fmt::print("    array: {}\npartition: {}\n\n", fmt::join(arr, ", "), fmt::join(partition(arr), ", "));
}
