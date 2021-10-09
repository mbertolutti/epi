// 5.5

#include <fmt/core.h>
#include <fmt/ranges.h>
#include <vector>
#include <set>


void remove_duplicates(std::vector<int>& vec)
{
    std::set<int> my_set;
    for (auto v : vec)
    {
        my_set.insert(v);
    }
    vec.resize(my_set.size());
    for (auto s : my_set)
    {
        size_t i = 0;
        vec[i] = s;
        ++i;
    }
}

int main()
{
    std::vector<int> vec = {1, 1, 2, 2, 1, 3, 2, 3, 3, 1};
    fmt::print("vector: {}\n", fmt::join(vec, ", "));
    remove_duplicates(vec);
    fmt::print("unique: {}\n", fmt::join(vec, ", "));
}
