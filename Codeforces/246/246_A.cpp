// https://codeforces.com/contest/246/problem/A
// https://codeforces.com/contest/246/submission/18055009

#include <iostream>
#include <random>
using namespace std;


int main() {

	int n;
	cin >> n;
	if (n < 3) puts("-1");
	else for (; n > 0; n--)cout << n << " ";

	return EXIT_SUCCESS;
}