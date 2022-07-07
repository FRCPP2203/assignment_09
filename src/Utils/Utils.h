#pragma once
#include <string>
#include <vector>

template <typename T>
int strToNum(const std::string &s)
{
    // Initialize a variable
    T num = 0;
    int n = s.length();

    // Iterate till length of the string
    for (int i = 0; i < n; i++)

        // Subtract 48 from the current digit
        num = num * 10 + (T(s[i]) - 48);

    // Print the answer
    return num;
}

std::vector<std::string> strToVec(const std::string &s)
{
    std::vector<std::string> vec;
    int index = 0;
    int len = s.length();
    int i = 0;
    while (len > i)
    {
        std::string a = "";
        while (s[index] != ' ' && index < len)
        {
            a += s[index];
            index++;
        }
        vec.push_back(a);
        index++;
        i++;
    }
    return vec;
}