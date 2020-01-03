// https://codeforces.com/problemset/problem/987/A
// https://codeforces.com/contest/987/submission/68116433

#include <vector>
#include <string>
#include <map>
#include <iostream>
using namespace std;


int main()
{
    int n;
    string s;

    map<string, string> needed = 
    {
        {"purple", "Power"},
        {"green",  "Time"},
        {"blue",   "Space"},
        {"orange", "Soul"},
        {"red",    "Reality"},
        {"yellow", "Mind"}
    };

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        needed.erase(s);
    }
 
    cout << needed.size() << std::endl;
    for (const auto& keyValuePair : needed)
    {
        cout << keyValuePair.second << std::endl;
    }

    return 0;
}