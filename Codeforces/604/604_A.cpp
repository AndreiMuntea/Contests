// https://codeforces.com/contest/604/problem/A
// https://codeforces.com/contest/604/submission/17336525

#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int m1, m2, m3, m4, m5, w1, w2, w3, w4, w5, s, u;
	double sm = 0;
	cin >> m1 >> m2 >> m3 >> m4 >> m5 >> w1 >> w2 >> w3 >> w4 >> w5 >> s >> u;
	sm += max(0.3 * 500,  (1 - m1 / 250.0) * 500 - 50.0 * w1)  +
		  max(0.3 * 1000, (1 - m2 / 250.0) * 1000 - 50.0 * w2) +
		  max(0.3 * 1500, (1 - m3 / 250.0) * 1500 - 50.0 * w3) +
		  max(0.3 * 2000, (1 - m4 / 250.0) * 2000 - 50.0 * w4) +
		  max(0.3 * 2500, (1 - m5 / 250.0) * 2500 - 50.0 * w5) +
		  s * 100 - u * 50;
	cout << int(sm);
}  