// https://codeforces.com/contest/656/problem/A
// https://codeforces.com/contest/656/submission/17154162

#include <iostream>
using namespace std;


int main()
{
	unsigned long long n, t = 1;;

	cin >> n;
	t <<= n;
	if (n >= 13) t -= (1 << (n - 13)) * 100;
	cout << t;
	return EXIT_SUCCESS;
}