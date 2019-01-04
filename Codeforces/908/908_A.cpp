// https://codeforces.com/contest/908/problem/A
// https://codeforces.com/contest/908/submission/46923986

#include <iostream>
#include <string>
using namespace std;

inline bool ShouldFlip(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case '1':
    case '3':
    case '5':
    case '7':
    case '9':
        return true;
    default:
        return false;
    }
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL);
    string s;
    int nr = 0;
    
    cin >> s;
    for (auto& c : s)
    {
        if (ShouldFlip(c)) nr++;
    }

    cout << nr;
    return 0;
}