// https://codeforces.com/contest/660/problem/A
// https://codeforces.com/contest/660/submission/18716745

#ifndef _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main() {

	int n, v[1002], i = 0, sz;
	vector<int> fin;

	for (scanf("%d", &n); i < n; scanf("%d", &v[i++]));
	for (i = 0; i < n - 1; i++) {
		fin.push_back(v[i]);
		if (gcd(v[i], v[i + 1]) != 1) fin.push_back(1);
	}
	fin.push_back(v[n - 1]);
	sz = (int)fin.size();

	for (printf("%d\n", sz - n), i = 0; i < sz ; printf("%d ", fin[i++]));

	return EXIT_SUCCESS;
}

#endif //_CRT_NONSTDC_NO_WARNINGS