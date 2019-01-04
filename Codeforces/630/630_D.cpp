// https://codeforces.com/contest/630/problem/D
// https://codeforces.com/contest/630/submission/17323566

#include <iostream>
using namespace std;


int main()
{
	unsigned long long n;
	cin >> n;
	cout << 1 + 6 * n*(n + 1) / 2;

	return EXIT_SUCCESS;
}