// https://codeforces.com/contest/615/problem/A
// https://codeforces.com/contest/615/submission/16452036

#include <stdlib.h>
#include <stdio.h>

typedef enum elem{ONE, ZERO} STATE;

int main() {
	int n, m, i, j, x, y;
	scanf_s("%d %d", &n, &m);
	STATE *v, ok = ONE;
	v = (STATE*)malloc((m+1)*sizeof(STATE));
	for (i = 0; i <= m; i++) v[i] = ZERO;
	for (i = 0; i < n; i++) {
		scanf_s("%d", &x);
		for (j = 0; j < x; j++) {
			scanf_s("%d", &y);
			v[y] = ONE;
		}
	}
	i = 1;
	while (i <= m && ok != ZERO) {
		ok = v[i];
		i++;
	}
	if (ok == ONE) printf("YES");
	else printf("NO");
	free(v);
	return EXIT_SUCCESS;
}