// https://codeforces.com/contest/545/problem/A
// https://codeforces.com/contest/545/submission/17418609

#include <iostream>
using namespace std;


int main() {
	int n, v[101], k = 0, x;
	bool ok;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		ok = true;
		for (int j = 1; j <= n; j++) {
			cin >> x;
			if (x == 1 || x==3) ok = false;
		}
		if (ok) {k++; v[k] = i;}
	}
	cout << k << endl;
	for (int i = 1; i <= k; i++)cout << v[i] << " ";

	return EXIT_SUCCESS;
}