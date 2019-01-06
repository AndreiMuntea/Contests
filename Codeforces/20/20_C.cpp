// https://codeforces.com/contest/20/problem/C
// https://codeforces.com/contest/20/submission/48035394
#include <map>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

void BellmanFord(int Edges, map<int, vector<pair<int, int>>> & Graph, int Source, vector<long long>& Distance, vector<int>& Parent)
{
    priority_queue<int> q;

    Distance = vector<long long>(Edges + 1, std::numeric_limits<long long>::max());
    Parent = vector<int>(Edges + 1, 0);

    q.push(Source);
    Distance[Source] = 0;

    while (!q.empty())
    {
        auto current = q.top(); 
        q.pop();

        for (const auto& keyValuePair : Graph[current])
        {
            auto target = keyValuePair.first;
            auto weight = keyValuePair.second;

            if (Distance[current] + weight < Distance[target])
            {
                Parent[target] = current;
                Distance[target] = Distance[current] + weight;
                q.push(target);
            }
        }
    }
}

void PrintPath(vector<int>& Parent, int index)
{
    if (index == 0) return;
    PrintPath(Parent, Parent[index]);
    printf("%d ", index);
}


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, x, y, w;

    cin >> n >> m;
    map<int, vector<pair<int, int>>> graph;
    vector<long long> distance;
    vector<int> parent;

    for (int i = 1; i <= m; ++i)
    {
        cin >> x >> y >> w;

        graph[x].push_back({ y,w });
        graph[y].push_back({ x,w });
    }

    BellmanFord(n, graph, 1, distance, parent);

    if (distance[n] == numeric_limits<long long>::max())
    {
        cout << "-1\n";
    }
    else
    {
        PrintPath(parent, n);
    }

    return 0;

}