// https://codeforces.com/contest/706/problem/B
// https://codeforces.com/contest/706/submission/46624969

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int Find(const vector<int>& V, int X)
{
	int lo = 0;
	int hi = V.size() - 1;
	int m = 0;
	int found = -1;

	while (lo <= hi)
	{
		m = (lo + hi) / 2;
		if (V[m] > X) hi = m - 1;
		else found = m, lo = m + 1;
	}
	
	return found;
}

int main()
{
	int n, d, x;
	
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; ++i) cin >> v[i];

	sort(v.begin(), v.end());

	cin >> d;
	while (d--)
	{
		cin >> x;
		cout << Find(v, x) + 1 << "\n";
	}

	return 0;
}