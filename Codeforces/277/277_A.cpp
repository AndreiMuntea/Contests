// https://codeforces.com/contest/277/problem/A
// https://codeforces.com/contest/277/submission/48031502

#include <map>
#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

int find(map<int, int>& parent, int x)
{
    if (x == parent[x]) return x;
    return parent[x] = find(parent, parent[x]);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m, k, x, y, ctx = 0;
    map<int, int> languages;
    set<int> masters;

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> k;
        if (k == 0)
        {
            ++ctx;
            continue;
        }

        cin >> x;
        if (languages[x] == 0) languages[x] = x;
        auto px = find(languages, x);


        for (int j = 2; j <= k; ++j)
        {
            cin >> y;
            if (languages[y] == 0) languages[y] = y;
            auto py = find(languages, y);
           
            languages[py] = px;
        }
    }

    for (auto& keyValuePair : languages)
    {
        masters.insert(find(languages, keyValuePair.first));
    }

    if (masters.size() == 0) cout << ctx;
    else cout << masters.size() - 1 + ctx;

    return 0;
}