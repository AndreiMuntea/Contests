// https://codeforces.com/contest/686/problem/B
// https://codeforces.com/contest/686/submission/18716425

#ifndef _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void swap(int& a, int&b) {
	auto aux = a;
	a = b;
	b = aux;
}

int main() {

	int n, v[105], i = 0;
	char ok = 0;

	for (scanf("%d", &n); i < n; scanf("%d", &v[i++]));
	while (ok == 0) {
		ok = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] < v[i - 1]) swap(v[i], v[i - 1]), ok = 0, printf("%d %d\n", i, i+1);
		}
	}


	return EXIT_SUCCESS;
}

#endif //_CRT_NONSTDC_NO_WARNINGS