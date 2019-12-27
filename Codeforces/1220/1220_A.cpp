// https://codeforces.com/problemset/problem/1220/A
// https://codeforces.com/contest/1220/submission/67693181

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string s;
    int z, n;
    
    cin >> z >> s;

    z = 0; n = 0;
    for (const auto& c : s)
    {
        if (c == 'z') z++;
        else if (c == 'n') n++;
    }
    while (n--) cout << "1 ";
    while (z--) cout << "0 ";

    return 0;
}