// https://codeforces.com/contest/681/problem/B
// https://codeforces.com/contest/681/submission/18471034

#include <iostream>
using namespace std;

const int house = 1234567;
const int car = 123456;
const int comp = 1234;

int main() {
	int n, rez;
	bool ok = false;
	cin >> n;
	for (int i = 0; ok == false && house*i <= n; i++) {
		for (int j = 0; ok == false && i*house + j * car <= n; j++) {
			rez = i * house + j * car;
			if ((n - rez) % comp == 0) ok = true;
		}
	}
	(ok) ? puts("YES") : puts("NO");


	return EXIT_SUCCESS;
}