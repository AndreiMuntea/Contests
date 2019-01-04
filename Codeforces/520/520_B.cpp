// https://codeforces.com/contest/520/problem/B
// https://codeforces.com/contest/520/submission/17434691

#include <iostream>
using namespace std;

int main() {
	int n, m, CNT;
	cin >> m >> n;
	for (CNT = 0; n > m; (n&1) ? n++ : n>>= 1, CNT++);
	cout << CNT + (m - n);
	return EXIT_SUCCESS;
}