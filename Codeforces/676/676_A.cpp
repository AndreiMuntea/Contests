// https://codeforces.com/contest/676/problem/A
// https://codeforces.com/contest/676/submission/18780987

#ifndef _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

	int n, poz1, pozn, i, x;
	for (scanf("%d", &n), i = 1; i <= n; ++i) {
		scanf("%d", &x);
		if (x == 1) poz1 = i;
		else if (x == n) pozn = i;
	}
	printf("%d", max(max(abs(1 - poz1), abs(n - poz1)), max(abs(1 - pozn), abs(n - pozn))));

	return EXIT_SUCCESS;
}

#endif //_CRT_NONSTDC_NO_WARNINGS