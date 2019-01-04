// https://codeforces.com/contest/369/problem/A
// https://codeforces.com/contest/369/submission/17419130

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, a, b, x, i, count;
	scanf("%d %d %d", &n, &a, &b);
	for (i = 0, count = 0; i < n; i++) {
		scanf("%d", &x);
		if (x == 1) {
			if (a > 0) a--;
			else count++;
		}
		else {
			if (b > 0) b--;
			else if (a > 0) a--;
			else count++;
		}
	}
	printf("%d", count);

	return EXIT_SUCCESS;
}