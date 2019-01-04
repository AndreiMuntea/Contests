// https://codeforces.com/contest/758/problem/A
// https://codeforces.com/contest/758/submission/27364470

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	int mx = numeric_limits<int>::min();
	vector<int> vct(100, 0);
	int s = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)cin >> vct[i] , mx = max(mx, vct[i]);
	for (int i = 0; i < n; ++i) s += mx - vct[i];
	cout << s;


	return 0;
}
