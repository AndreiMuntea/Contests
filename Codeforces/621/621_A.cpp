// https://codeforces.com/contest/621/problem/A
// https://codeforces.com/contest/621/submission/16450717

#include <stdio.h>
#include <stdlib.h>

#define MAX 0x3B9ACA01

int main(){
	int n,i,odds = 0;
	unsigned long long x, oddmin = MAX, s = 0;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		scanf_s("%llu", &x);
		s += x;
		if (x & 1) {
			odds++;
			if (x < oddmin) oddmin = x;
		}
	}

	if (odds & 1) s -= oddmin;
	printf("%llu", s);
	return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

#define MAX 0x3B9ACA01

int main(){
	int n,i,odds = 0;
	unsigned long long x, oddmin = MAX, s = 0;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		scanf_s("%llu", &x);
		s += x;
		if (x % 2 == 1) {
			odds++;
			if (x < oddmin) oddmin = x;
		}
	}

	if (odds % 2 == 1) s -= oddmin;
	printf("%llu", s);
	return EXIT_SUCCESS;
}