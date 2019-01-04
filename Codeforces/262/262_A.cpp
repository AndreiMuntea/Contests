// https://codeforces.com/contest/262/problem/A
// https://codeforces.com/contest/262/submission/17331632

#include <iostream>
using std::cin;
using std::cout;

int main() {

	int n, k, x, nr = 0, aux;
	cin >> n >> k;
	for (; n > 0; n--) {
		cin >> x;
		aux = 0;
		for (; x != 0;x /= 10) if (x % 10 == 4 || x % 10 == 7) aux++;
		if (aux <= k) nr++;
	}
	cout << nr;
	return EXIT_SUCCESS;

}