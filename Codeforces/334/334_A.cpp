// https://codeforces.com/contest/334/problem/A
// https://codeforces.com/contest/334/submission/18030157

#include <iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	for (int i = 1, t = 2; i <= n*n / 2; i++, t += 2) {
		cout << i << " " << n*n - i + 1 << " ";
		if (t % n == 0) cout << "\n";
	}

	return EXIT_SUCCESS;
}