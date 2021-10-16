// 10.7

// implement a stack data structure api using a heap data structure 

#include "epiHelpers.h"

#include <queue>
#include <utility>

#include <string>
#include <fmt/core.h>
#include <fmt/ranges.h>

using namespace epi;

struct heap_stack
{
private:
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::less<std::pair<int, int>>> pq;
    size_t count;

public:
    heap_stack()
    {
        count = 0;
    }

    void push(int i)
    {
        pq.push(std::pair<int, int>(++count, i));
    }

    int top()
    {
        return pq.top().second;
    }

    void pop()
    {
        pq.pop();
        --count;
    }

    bool empty()
    {
        return count ? false : true;
    }
};

int main()
{
    const std::string input_string = "d213d21735d234d2471d233";
    std::vector<int> vec = {};

    fmt::print("input_string: {}\n", input_string);
    dstring_to_vec(input_string, vec);
    fmt::print("vector:\n{}\n\n", fmt::join(vec, " "));

    std::unique_ptr<heap_stack> hs(new heap_stack());
    fmt::print("push vector into heap stack:\n");
    for (int v : vec)
    {
        fmt::print("{} ", v);
        hs->push(v);
    }
    fmt::print("\n\n");

    fmt::print("pop heap stack values:\n");
    while (!hs->empty())
    {
        fmt::print("{} ", hs->top());
        hs->pop();
    }
    fmt::print("\n\n");
}
