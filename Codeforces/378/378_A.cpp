// https://codeforces.com/contest/378/problem/A
// https://codeforces.com/contest/378/submission/16639290

#include <stdlib.h>
#include <stdio.h>
int main() {
	int a, b, eq = 0, aWin = 0, bWin = 0;
	scanf_s("%d %d", &a, &b);
	for (int i = 1; i <= 6; i++) {
		if (abs(a - i) < abs(b - i)) aWin++;
		else if (abs(a - i) == abs(b - i)) eq++;
		else bWin++;
	}
	printf("%d %d %d", aWin, eq, bWin);
	return EXIT_SUCCESS;
}