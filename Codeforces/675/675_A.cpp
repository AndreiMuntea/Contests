// https://codeforces.com/contest/675/problem/A
// https://codeforces.com/contest/675/submission/18242837

#include <iostream>
using namespace std;


int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	if (c == 0 && a != b) puts("NO");
	else if (c == 0 && a == b) puts("YES");
	else if (c < 0 && a < b || c > 0 && a > b) puts("NO");
	else if ((b - a) % c != 0) puts("NO");
	else puts("YES");
		
	return EXIT_SUCCESS;

}