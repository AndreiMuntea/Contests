// https://codeforces.com/contest/1003/problem/A
// https://codeforces.com/contest/1003/submission/46796608

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int v[101] = { 0 };
	int n, x, mx = -1;
	
	cin >> n;
	while (n--)
	{
		cin >> x;
		mx = max(mx, ++v[x]);
	}

	cout << mx;

	return 0;
}