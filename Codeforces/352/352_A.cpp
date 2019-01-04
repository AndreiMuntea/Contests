// https://codeforces.com/contest/352/problem/A
// https://codeforces.com/contest/352/submission/17171732

#include <iostream>
using namespace std;


int main()
{
	int n, n0 = 0, n5 = 0;
	char x;
	char five[] = "555555555";
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		x = getchar();
		if (x == '0') n0++;
		else n5++;
		getchar();
	}

	if (n0 == 0) cout << -1;
	else
	{
		if (n5 / 9 == 0) n0 = 1;
		for (int i = 1; i <= n5 / 9; i++) cout << five;
		for (int i = 1; i <= n0; i++) putchar('0');
	}

	return EXIT_SUCCESS;
}