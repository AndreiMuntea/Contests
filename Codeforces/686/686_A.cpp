// https://codeforces.com/contest/686/problem/A
// https://codeforces.com/contest/686/submission/18716299

#ifndef _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main() {

	long long n, x, d, ct = 0;
	char sign;

	scanf("%lld %lld", &n, &x);
	
	while (n--) {
		scanf("%c %c %lld", &sign, &sign, &d);
		(sign == '+') ? x += d : ((x >= d) ? x -= d : ct++);
	}
	printf("%lld %lld \n", x, ct);


	return EXIT_SUCCESS;
}

#endif //_CRT_NONSTDC_NO_WARNINGS