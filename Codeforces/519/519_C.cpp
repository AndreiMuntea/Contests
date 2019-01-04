// https://codeforces.com/contest/519/problem/C
// https://codeforces.com/contest/519/submission/17145705

#include <iostream>
#include <algorithm> 
using namespace std;


int main()
{
	int n, m;

	cin >> n >> m;
	cout << min(n, min(m, (n + m) / 3));

	return EXIT_SUCCESS;
}