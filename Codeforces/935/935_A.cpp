// https://codeforces.com/contest/935/problem/A
// https://codeforces.com/contest/935/submission/46818216

#include <iostream>
using namespace std;

int Solve(int n)
{
	int nr = 0;
	for (int i = 1; i < n / 2 + 1; ++i)
	{
		if (n % i == 0) ++nr;
	}
	return nr;
}

int main()
{
	int n;
	cin >> n;
	cout << Solve(n);

	return 0;
}