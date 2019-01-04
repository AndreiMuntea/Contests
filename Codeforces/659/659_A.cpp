// https://codeforces.com/contest/659/problem/A
// https://codeforces.com/contest/659/submission/17562007

#include <stdio.h>
#include <stdlib.h>



int main() {

	int n, a, b, c;
	scanf("%d %d %d", &n, &a, &b);
	a = (a + b) % n;
	if (a < 0) a = n + a;
	else if (a == 0) a = n;
	printf("%d",a);
}