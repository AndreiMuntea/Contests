// https://codeforces.com/contest/581/problem/B
// https://codeforces.com/contest/581/submission/21461974

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

	int n;
	int a[100002];
	int maxim[100002];

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		
	}

	maxim[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; --i) {
		maxim[i] = max(a[i], maxim[i + 1]);
	}

	for (int i = 0; i < n -1 ; ++i) {
		int num = maxim[i] - a[i] + 1;
		if (a[i] == maxim[i] && maxim[i] > maxim[i+1]) num = 0;
		cout << num << " ";
	}
	cout << 0;
	return 0;
}