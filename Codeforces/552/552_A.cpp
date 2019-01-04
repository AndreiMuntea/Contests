// https://codeforces.com/contest/552/problem/A
// https://codeforces.com/contest/552/submission/17433232

#include <stdio.h>
#include <stdlib.h>


int main() {

	int cnt = 0, n, x1, y1, x2, y2;
	scanf("%d", &n);
	for (; n > 0; n--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		cnt += (x2 - x1 + 1) * (y2 - y1 + 1);
	}
	printf("%d", cnt);

	return EXIT_SUCCESS;
}