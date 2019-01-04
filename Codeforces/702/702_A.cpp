// https://codeforces.com/contest/702/problem/A
// https://codeforces.com/contest/702/submission/46818106

#include <iostream>
using namespace std;


int main()
{
	int n, prev, cur, mx = 1, pc = 1;
	cin >> n >> prev;

	for (int i = 1; i < n; ++i)
	{
		cin >> cur;
		cur > prev ? ++pc : pc = 1;
		if (mx < pc) mx = pc;
		prev = cur;
	}

	cout << mx;
	return 0;
}