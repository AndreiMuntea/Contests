// https://codeforces.com/contest/622/problem/A
// https://codeforces.com/contest/622/submission/17340093

#include <iostream>
using namespace std;


int main() {
	long long n, i;
	cin >> n;
	for (i = 1; ((1 + i) * i )/ 2 < n; i++);
	cout << n - ((i - 1) * i) / 2;
	return EXIT_SUCCESS;
}