// https://codeforces.com/contest/1037/problem/D
// https://codeforces.com/contest/1037/submission/48033461


#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
using namespace std;

bool CheckBfs(map<int, set<int>>& graph, vector<int>& bfs)
{
    queue<int> q;
    size_t idx = 1;
    vector<bool> visited(graph.size() + 1, false);
    q.push(1);
    visited[1] = true;

    if (bfs[0] != 1) return false;
    while (idx < bfs.size())
    {
        auto in = q.front(); q.pop();
        set<int> toVisit;
       
        for (auto neighbour : graph[in])
        {
            if (!visited[neighbour]) toVisit.insert(neighbour);
        }

        for (size_t i = 0; i < toVisit.size(); ++i)
        {
            if (idx == bfs.size()) return false;
            if (toVisit.find(bfs[idx]) == toVisit.end()) return false;
            if (visited[bfs[idx]]) return false;

            q.push(bfs[idx]);
            visited[bfs[idx]] = true;
            idx++;
        }
    }

    for (size_t i = 1; i < visited.size(); ++i)
    {
        if (!visited[i]) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, x, y;
    vector<int> bfs;
    map<int, set<int>> graph;

    cin >> n;

    for (int i = 1; i < n; ++i)
    {
        cin >> x >> y;
        graph[x].insert(y);
        graph[y].insert(x);
    }

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        bfs.push_back(x);
    }

    CheckBfs(graph, bfs) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}