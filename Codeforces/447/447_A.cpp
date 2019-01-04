// https://codeforces.com/contest/447/problem/A
// https://codeforces.com/contest/447/submission/18041709

#include <iostream>
using namespace std;



int main() {

	int x, n, p, v[301];
	memset(v, 0, 301 * sizeof(int));
	
	cin >> p >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (v[x % p] != 0) {
			cout << i;
			goto out;
		}
		else v[x%p] = 1;
	}
	cout << "-1";

out:
	return EXIT_SUCCESS;
}