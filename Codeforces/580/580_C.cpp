// https://codeforces.com/contest/580/problem/C
// https://codeforces.com/contest/580/submission/46924788

#include <map>
#include <vector>
#include <iostream>
using namespace std;

int dfs(map<int, vector<int>>& graph, int maxCats, int currentNode, int currentCats, vector<bool>& cats, vector<bool>& visited)
{
    (cats[currentNode]) ? currentCats++ : currentCats = 0;
    visited[currentNode] = true;

    if (currentCats > maxCats) return 0;
    
    int res = 0;
    bool leaf = true;
    for (auto& neighbour : graph[currentNode])
    {
        if (visited[neighbour]) continue;
        leaf = false;
        res += dfs(graph, maxCats, neighbour, currentCats, cats, visited);
        visited[neighbour] = false;
    }
    
    if (leaf) return 1;
    return res;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int n, m, x, y;
    cin >> n >> m;

    map<int, vector<int>> graph;
    vector<bool> cats(n + 1, false);
    vector<bool> visited(n + 1, false);
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        cats[i] = (x == 1);
    }

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    cout << dfs(graph, m, 1, 0, cats, visited);
    return 0;
}