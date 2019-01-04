// https://codeforces.com/contest/451/problem/B
// https://codeforces.com/contest/451/submission/18724654

#ifndef _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void swap(int&a, int&b) {int aux = a;a = b;b = aux;}

int main() {

	int n, v[100005], i = 0, j;
	vector<int> rez;
	
	for (scanf("%d", &n); i < n; scanf("%d", &v[i++]));
	
	i = 0;
	while (i < n - 1) {
		if (v[i] > v[i + 1]) {
			rez.push_back(i + 1);
			j = i;
			while (j < n - 1 && v[j] > v[j + 1]) j++;
			rez.push_back(j+1);
			swap(v[i], v[j]);
			if (i > 0 && v[i - 1] > v[i]) i = n, rez.push_back(2);
			else i = j;
		}
		else i++;
	}

	(rez.size() > 2) ? puts("no") : ((rez.size() == 0) ? puts("yes\n1 1\n") : printf("yes\n%d %d\n", rez[0], rez[1]));
	return EXIT_SUCCESS;
}

#endif //_CRT_NONSTDC_NO_WARNINGS