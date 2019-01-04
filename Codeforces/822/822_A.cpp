// https://codeforces.com/contest/822/problem/A
// https://codeforces.com/contest/822/submission/30913465

#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned int ui;

ui Fact(const ui& a)
{
	ui res = 1;
	for (ui i = 2; i <= a; ++i)
	{
		res *= i;
	}

	return res;
}

int main()
{
	ui a = 0, b = 0;
	cin >> a >> b;
	cout << Fact(min(a, b));

	cin >> a;
	return 0;
}