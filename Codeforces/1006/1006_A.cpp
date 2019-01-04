// https://codeforces.com/contest/1006/problem/A
// https://codeforces.com/contest/1006/submission/46828520

#include <iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, x;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if ((x & 1) == 0) --x;
		cout << x << " ";
	}

	return 0;
}