// https://codeforces.com/contest/488/problem/A
// https://codeforces.com/contest/488/submission/17418962

#include <iostream>
using namespace std;

bool valid(long long x) {
	while (x != 0) {
		if (x % 10 == 8 || x%10 == -8) return true;
		x /= 10;
	}
	return false;
}

int main() {

	long long n, k = 1;
	cin >> n;
	for (long long i = n+1; !valid(i); k++, i++);
	cout << k;
	return EXIT_SUCCESS;
}