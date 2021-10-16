// 12.1

#include <fmt/core.h>

#include <string>

bool isPalindrome(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    std::string::const_iterator rit = s.end() - 1;

    for (; it < rit; ++it, --rit)
    {
        if (*it != *rit)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const std::string str = "foobaraboof";
    const std::string str2 = "foobarsaboof";

    fmt::print("isPalindrome: {}\n", isPalindrome(str));
    fmt::print("isPalindrome: {}\n\n", isPalindrome(str2));
}
