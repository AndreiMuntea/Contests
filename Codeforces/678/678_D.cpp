// https://codeforces.com/contest/678/problem/D
// https://codeforces.com/contest/678/submission/18451856

#include <iostream>
using namespace std;

const unsigned long long  MOD=1000000007;

unsigned long long pow(unsigned long long a, unsigned long long b) {
	if (b == 1) return a;
	if (b == 0) return 1;
	if (b % 2 == 0) return pow(((a% MOD)*(a% MOD)) % MOD, b / 2);
	return ((a% MOD)*pow(((a% MOD)*(a% MOD)) % MOD, b / 2)) % MOD;
}

int main() {

	unsigned long long a, b, n, x, rez, td, pt;
	cin >> a >> b >> n >> x;
	
	pt = pow(a, n);
	if (a == 1) td = ((b%MOD) * (n%MOD)) % MOD;
	else td = (b % MOD  * ((pt - 1) % MOD * pow(a-1,MOD-2) % MOD)) % MOD;
	rez = (((pt%MOD) * (x%MOD)) % MOD + td ) % MOD;

	cout << rez;


	return 0;
}