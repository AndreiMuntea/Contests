// https://codeforces.com/contest/552/problem/B
// https://codeforces.com/contest/552/submission/16639895

#include <iostream> 
using namespace std;



int main() {

	unsigned long long v[12], pow10[12], n, nein = 9, i ;
	cin >> n;
	v[0] = 0;
	pow10[0] = 1;
	for (i = 1; i <= 11; i++) {
		v[i] = i * nein + v[i - 1];
		nein *= 10;
		pow10[i] = 10 * pow10[i - 1];
	}
	for (i = 1; pow10[i] <= n; i++);
	cout << v[i - 1] + (n - pow10[i-1] + 1) * i;
	return EXIT_SUCCESS;
}