// https://codeforces.com/contest/501/problem/B
// https://codeforces.com/contest/501/submission/48032053

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void Add(map<string, int>& hash, map<int, string>& revHash, int& id, string& handle)
{
    if (hash[handle] == 0)
    {
        hash[handle] = ++id;
        revHash[id] = handle;
    }
}

int find(map<int, int>& parent, int x)
{
    if (x == parent[x]) return x;
    return parent[x] = find(parent, parent[x]);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int q, id = 0;

    map<string, int> hash;
    map<int, string> revHash;

    map<int, int> parent;
    map<int, bool> visited;

    vector<pair<string, string>> changes;
    string oldH, newH;

    cin >> q;
    for (int i = 1; i <= q; ++i)
    {
        cin >> oldH >> newH;
        Add(hash, revHash, id, oldH);
        Add(hash, revHash, id, newH);

        auto x = hash[oldH]; if (parent[x] == 0) parent[x] = x;
        auto y = hash[newH]; if (parent[y] == 0) parent[y] = y;

        parent[find(parent, x)] = y;
    }

    for (int i = 1; i <= id; ++i)
    {
        auto px = find(parent, i);
        if (visited[px]) continue;

        visited[px] = true;
        changes.push_back(make_pair(revHash[i], revHash[px]));
    }

    cout << changes.size() << "\n";
    for (const auto& value : changes)
    {
        cout << value.first << " " << value.second << "\n";
    }

    return 0;
}