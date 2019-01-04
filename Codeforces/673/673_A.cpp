// https://codeforces.com/contest/673/problem/A
// https://codeforces.com/contest/673/submission/17928098

#include <iostream>
using namespace std;


int main() {
	int n, t1 = 0, t2, s = 0;
	bool ok = true;
	cin >> n;
	for (int i = 0; i < n && ok; i++) {
		cin >> t2;
		if (t2 - t1 <= 15) s = t2;
		else s += 15, ok = false;
		t1 = t2;
	}
	if (ok) s += 15;
	if (s > 90) s = 90;
	cout << s;
	return EXIT_SUCCESS;
}