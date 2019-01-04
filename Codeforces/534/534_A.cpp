// https://codeforces.com/contest/534/problem/A
// https://codeforces.com/contest/534/submission/18029863

#include <iostream>
using namespace std;


int main() {

	int n, prim, ultim;
	cin >> n;
	if (n == 1 || n == 2) cout << "1\n1";
	else if (n == 3) cout << "2\n1 3";
	else if (n == 4) cout << "4\n3 1 4 2";
	else {
		cout << n << "\n";
		for (prim = 1, ultim = (n + 1) / 2 + 1; prim <= (n + 1) / 2; prim++, ultim++) {
			cout << prim << " "; if (ultim <= n) cout << ultim << " ";
		}
	}
	return EXIT_SUCCESS;
}