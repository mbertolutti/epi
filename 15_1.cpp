// 15.1

#include <fmt/core.h>
#include <fmt/format.h>
#include <vector>

void tower_of_hanoi_step(
    int height,
    std::vector<int>& src,
    std::vector<int>& dest,
    std::vector<int>& tmp
    )
{
    if (height == 1)
    {
        dest.push_back(src.back());
        src.pop_back();
        return;
    }
    tower_of_hanoi_step(height - 1, src, tmp, dest);
    dest.push_back(src.back());
    src.pop_back();
    tower_of_hanoi_step(height - 1, tmp, dest, src);
}

int main()
{
    std::vector<int> t1 = {0, 1, 2, 3, 4, 5, 6, 7};
    std::vector<int> t2 {};
    std::vector<int> t3 {};

    int height = t1.size();

    fmt::print("t1: {}\n", fmt::join(t1, ", "));
    fmt::print("t2: {}\n", fmt::join(t2, ", "));
    fmt::print("t3: {}\n", fmt::join(t3, ", "));

    tower_of_hanoi_step(height, t1, t2, t3);

    fmt::print("t1: {}\n", fmt::join(t1, ", "));
    fmt::print("t2: {}\n", fmt::join(t2, ", "));
    fmt::print("t3: {}\n", fmt::join(t3, ", "));
}
