// https://codeforces.com/contest/689/problem/B
// https://codeforces.com/contest/689/submission/47460622

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;

void BellmanFord(map<int, vector<int>>& graph, int n)
{
	vector<int> distance(n + 1, std::numeric_limits<int>::max());
	queue<int> q;
	int current;

	distance[1] = 0;
	q.push(1);

	while (!q.empty())
	{
		current = q.front(); q.pop();
		for (auto& neighbour : graph[current])
		{
			if (distance[current] + 1 < distance[neighbour])
			{
				distance[neighbour] = distance[current] + 1;
				q.push(neighbour);
			}
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << distance[i] << " ";
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n, x;
	
	cin >> n;
	map<int, vector<int>> graph;
	for (int i = 1; i < n; ++i)
	{
		graph[i].push_back(i + 1);
		graph[i + 1].push_back(i);
	}

	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		graph[i].push_back(x);
	}

	BellmanFord(graph, n);

	return 0;
}