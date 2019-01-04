// https://codeforces.com/contest/591/problem/A
// https://codeforces.com/contest/591/submission/18018381

#include <iostream>
#include <iomanip> 
using namespace std;


int main() {

	int l, p, q;
	cin >> l >> p >> q;
	cout << setprecision(10) << (double)(l * p) / (p + q * 1.0);

	return EXIT_SUCCESS;
}