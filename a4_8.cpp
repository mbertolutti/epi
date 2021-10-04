// 4.8

#include <fmt/core.h>
#include <stack>
#include <cassert>

using namespace std;

int reverse_digits(int number)
{
    stack<int> number_stack;
    while (number)
    {
        number_stack.push(number % 10);
        number /= 10;
    }
    int reversed_digits = 0;
    int mult = 1;
    while (!number_stack.empty())
    {
        reversed_digits += number_stack.top() * mult;
        mult *= 10;
        number_stack.pop();
    }
    return reversed_digits;
}

int main()
{
    int number = 123456789;

    assert(number >= 0);

    fmt::print("number: {}\nreversed: {}\n\n", number, reverse_digits(number));
}
