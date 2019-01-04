// https://codeforces.com/contest/606/problem/A
// https://codeforces.com/contest/606/submission/17916507

#include <iostream>
using namespace std;


int main() {

	int a[3], v[3], n = 0, s = 0;
	cin >> a[0] >> a[1] >> a[2] >> v[0] >> v[1] >> v[2];
	for (int i = 0; i < 3; i++) {
		if (a[i] > v[i]) s += (a[i] - v[i]) / 2;
		else n += v[i] - a[i];
	}
	(s >= n) ? puts("Yes") : puts("No");
	

	return EXIT_SUCCESS;
}