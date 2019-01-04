// https://codeforces.com/contest/620/problem/A
// https://codeforces.com/contest/620/submission/18017494

#include <iostream>
#include <algorithm>
using namespace std;



int main() {

	int xi, yi, xf, yf;
	cin >> xi >> yi >> xf >> yf;
	cout << max(abs(xf - xi), abs(yf - yi));


	return EXIT_SUCCESS;
}