// https://codeforces.com/contest/439/problem/B
// https://codeforces.com/contest/439/submission/18275375

#include <cstdio>
#include <cstdlib>
#include <algorithm>


int main() {

	unsigned long long n, x, s = 0, v[100001];
	scanf("%llu %llu", &n, &x);
	for (unsigned long long i = 0; i < n; i++)scanf("%llu", &v[i]);
	std::sort(v, v + n);
	for (unsigned long long i = 0; i < n; i++) {
		s += x*v[i];
		x--;
		if (x < 1) x = 1;
	}

	printf("%llu\n", s);

	return EXIT_SUCCESS;
}