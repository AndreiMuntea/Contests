// https://codeforces.com/contest/550/problem/C
// https://codeforces.com/contest/550/submission/46638716

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

set<int> multiplii2;
set<int> multiplii3;
map<int, vector<int>> occurences;

void BuildSet()
{
    int i = 16;
    for (; i < 100; i = i + 8) multiplii2.insert(i);
    for (; i < 1000; i = i + 8) multiplii3.insert(i);
}

void BuildOcc(const std::string& str)
{
    for (size_t i = 0; i < str.size(); ++i)
    {
        occurences[str[i] - '0'].push_back(i);
    }
}

bool Check1(int& res)
{
    if (occurences[0].size() > 0)
    {
        res = 0;
        return true;
    }
    if (occurences[8].size() > 0)
    {
        res = 8;
        return true;
    }
    return false;
}


bool Check2(int& res)
{
    for (const auto& m2 : multiplii2)
    {
        int d1 = m2 / 10;
        int d2 = m2 % 10;
        if (occurences[d1].size() > 0 && occurences[d2].size() > 0 && occurences[d1][0] < occurences[d2].back())
        {
            res = m2;
            return true;
        }
    }

    return false;
}

bool Check3(int& res)
{
    for (const auto& m3 : multiplii3)
    {
        int d1 = m3 / 100;
        int d2 = (m3 / 10) % 10;
        int d3 = m3 % 10;
        if (occurences[d1].size() > 0 && occurences[d2].size() > 0 && occurences[d3].size() > 0)
        {
            for (const auto& pos : occurences[d2])
            {
                if (pos > occurences[d1][0] && pos < occurences[d3].back())
                {
                    res = m3;
                    return true;
                }
            }
        }
    }

    return false;

}

int main()
{
    string str;
    int res;
    cin >> str;
    BuildSet();
    BuildOcc(str);

    if (Check1(res)) cout << "YES\n" << res;
    else if (Check2(res)) cout << "YES\n" << res;
    else if (Check3(res)) cout << "YES\n" << res;
    else cout << "NO\n";

    return 0;
}
