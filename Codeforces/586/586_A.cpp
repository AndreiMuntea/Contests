// https://codeforces.com/contest/586/problem/A
// https://codeforces.com/contest/586/submission/17471048

#include <iostream>
using namespace std;

int main() {
	int n, i = 1, count = 0;
	char x, y, ok = '1';
	cin >> n;
	getchar();
	for (; i <= n && count == 0; i++) {
		x = getchar();
		if (x == '1') count++;
		getchar();
	}
	
	y = x;
	for (; i <= n; i++) {
		x = getchar();
		if (x == '1' && ok == '0' ) count+=2, ok = '1';
		else if (x == '1') count++;
		else {
			if (y == '1' && ok == '1') ok = '0';
			else if (y == '0' && ok == '0') ok = '1';
		}
		y = x;
		getchar();
	}
	cout << count;
	return EXIT_SUCCESS;
}