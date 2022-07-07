
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