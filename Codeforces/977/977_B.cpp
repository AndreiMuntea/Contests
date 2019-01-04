// https://codeforces.com/contest/977/problem/B
// https://codeforces.com/contest/977/submission/46637241

#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
    map<pair<char, char>, int> mp;
    std::string str;
    int n, mx = 0;
    pair<char, char> res;

    cin >> n >> str;
    for (int i = 0; i < n - 1; ++i)
    {
        auto c = make_pair(str[i], str[i + 1]);
        if (mx < ++mp[c])
        {
            res = c;
            mx = mp[c];
        }
    }

    cout << res.first << res.second;

    return 0;
}