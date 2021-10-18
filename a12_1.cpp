// 12.1

#include <fmt/core.h>

#include <string>
#include <unordered_set>

bool isPalindromicPermutation(const std::string& s)
{
    std::unordered_set<char> us;
    for (const char c : s)
    {
        if (!us.erase(c))
        {
            us.insert(c);
        }
    }
    return us.size() > 1 ? false : true;
}

int main()
{
    const std::string str1 = "barabooffoo";
    const std::string str2 = "barsabooffoo";
    const std::string str3 = "aba";
    const std::string str4 = "abba";
    const std::string str5 = "a";
    const std::string str6 = "ab";

    fmt::print("isPalindromicPermutation: {}\n", isPalindromicPermutation(str1));
    fmt::print("isPalindromicPermutation: {}\n", isPalindromicPermutation(str2));
    fmt::print("isPalindromicPermutation: {}\n", isPalindromicPermutation(str3));
    fmt::print("isPalindromicPermutation: {}\n", isPalindromicPermutation(str4));
    fmt::print("isPalindromicPermutation: {}\n", isPalindromicPermutation(str5));
    fmt::print("isPalindromicPermutation: {}\n\n", isPalindromicPermutation(str6));
}
