// https://codeforces.com/contest/496/problem/A
// https://codeforces.com/contest/496/submission/47180521

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n, 0);
	int best1 = 0;
	int best2 = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	best1 = max(v[1] - v[0], v[2] - v[1]);
	best2 = v[2] - v[0];
	for (int i = 3; i < n; ++i)
	{
		best1 = max(best1, v[i] - v[i - 1]);
		best2 = min(best2, v[i] - v[i - 2]);
	}

	cout << max(best1, best2);
	return 0;
}