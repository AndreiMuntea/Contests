// https://codeforces.com/contest/628/problem/B
// https://codeforces.com/contest/628/submission/47967159

#include <string>
#include <iostream>
using namespace std;

inline uint8_t ToDigit(char c)
{
    return c - '0';
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s;
    unsigned long long count = 0;

    cin >> s;
    if (ToDigit(s[0]) % 4 == 0) count = 1;

    for (size_t i = 1; i < s.size(); ++i)
    {
        if (ToDigit(s[i]) % 4 == 0) ++count;
        
        uint8_t nmb = ToDigit(s[i - 1]) * 10 + ToDigit(s[i]);
        if (nmb % 4 == 0) count += i;
    }

    cout << count;
    return 0;
}