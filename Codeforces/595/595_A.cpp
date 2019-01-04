// https://codeforces.com/contest/595/problem/A
// https://codeforces.com/contest/595/submission/17558105

#include <stdio.h>
#include <stdlib.h>


int main() {

	int n, m, x, y, i, j, nr;
	scanf("%d %d", &n, &m);
	for (i = 0, nr = 0; i < n; i++) {
		for (j = 0; j < 2 * m; j += 2) {
			scanf("%d %d", &x, &y);
			if (x || y) nr++;
		}
	}
	printf("%d", nr);

	return EXIT_SUCCESS;
}