// https://codeforces.com/contest/608/problem/A
// https://codeforces.com/contest/608/submission/18043778

#include <iostream>
using namespace std;



int main() {

	int n, s, v[1001], sm = 0, et, arrival;
	memset(v, 0, 1001 * sizeof(int));

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> et >> arrival;
		if (v[et] < arrival) v[et] = arrival;
	}

	sm = 0;
	for (int i = s; i > 0; i--, sm++) {
		if (sm < v[i]) sm += v[i] - sm;
	}
	cout << sm;
	return EXIT_SUCCESS;
}