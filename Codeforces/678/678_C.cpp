// https://codeforces.com/contest/678/problem/C
// https://codeforces.com/contest/678/submission/18421949

#include <iostream>
#include <algorithm>
using namespace std;


long long gcd(const long long& a, const long long& b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main() {

	long long n, a, b, p, q, lcm, nra, nrb, nrc;
	cin >> n>> a >> b >> p >> q;

	lcm = (a*b) / gcd(a, b);
	nrc = n / lcm;
	nra = n / a - nrc;
	nrb = n / b - nrc;

	cout << nrc * max(p, q) + nra * p + nrb * q;
	return 0;
}