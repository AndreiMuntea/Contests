// https://codeforces.com/contest/988/problem/A
// https://codeforces.com/contest/988/submission/46797091

#include <iostream>
#include <map>
using namespace std;


int main()
{
	int n, k, x;
	map<int, int> mp;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		mp[x] = i;
	}

	if (mp.size() < k) cout << "NO";
	else
	{
		cout << "YES\n";
		for (const auto& p : mp)
		{
			cout << p.second << " ";
			if (--k == 0) break;
		}
	}

	return 0;
}