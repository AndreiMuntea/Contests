// https://codeforces.com/contest/230/problem/B
// https://codeforces.com/contest/230/submission/17466110

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

bool prime(long long x) {
	if (x == 1) return false;
	for (long long i = 2; i <= long long(sqrt(double(x))); i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {

	long long n, t, i;
	scanf("%I64d", &n);
	for (; n > 0; n--) {
		scanf("%I64d", &t);
		i = long long(sqrt(double(t)));
		if (i * i != t) puts("NO");
		else {
			if (prime(i)) puts("YES");
			else puts("NO");
		}
	}

	return EXIT_SUCCESS;
}