// https://codeforces.com/contest/233/problem/A
// https://codeforces.com/contest/233/submission/17701678

#include <iostream>
using namespace std;


int main() {

	int c;
	cin >> c;
	if (c & 1) puts("-1");
	else for (int i = 1; i <= c; i += 2) cout << i + 1 << " " << i << " ";

	return EXIT_SUCCESS;
}