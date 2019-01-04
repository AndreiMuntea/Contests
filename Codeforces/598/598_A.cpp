// https://codeforces.com/contest/598/problem/A
// https://codeforces.com/contest/598/submission/17154517

#include <iostream>
using namespace std;


int main()
{
	int t;
	unsigned long long n, s1, s2, ratio;
	long long s;
	cin >> t;
	for (; t > 0; t--)
	{
		cin >> n;
		s1 = (1 + n) * n / 2;
		ratio = 1;
		while (ratio <= n) ratio <<= 1;
		s2 = ratio - 1;
		s = (s1 - 2 * s2);
		cout << s << endl;
	}

	return EXIT_SUCCESS;
}