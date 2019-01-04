// https://codeforces.com/contest/656/problem/F
// https://codeforces.com/contest/656/submission/18043270

#include <iostream>
using namespace std;


int main() {
	int s = 1;
	char c;
	getchar();

	for (int i = 1; i <= 6; i++) {
		c = getchar();
		if (c == '1') s += 10;
		else s += c - 48;
	}

	cout << s;

	return EXIT_SUCCESS;
}