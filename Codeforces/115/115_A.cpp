// https://codeforces.com/contest/115/problem/A
// https://codeforces.com/contest/115/submission/47157726

#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

void DFS(int node, map<int, vector<int>>& graph, vector<bool>& visited, map<int,int>& sol, int& best)
{
    visited[node] = true;

    for (auto& neighbour : graph[node])
    {
        if (!visited[neighbour])
        {
            DFS(neighbour, graph, visited, sol, best);
        }
        sol[node] = max(sol[node], sol[neighbour] + 1);
    }

    best = max(best, sol[node]);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, best = 1, x;
    cin >> n;
    
    map<int, vector<int>> graph;
    map<int, int> sol;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        sol[x] = 1;
        sol[i] = 1;
        if (x == -1) continue;
        graph[x].push_back(i);
    }

    vector<bool> visited(n + 1, false);
    for (auto& keyValuePair : graph)
    {
        if (!visited[keyValuePair.first])
        {
            DFS(keyValuePair.first, graph, visited, sol, best);
        }
    }

    cout << best;

    return 0;
}