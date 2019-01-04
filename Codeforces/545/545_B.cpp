// https://codeforces.com/contest/545/problem/B
// https://codeforces.com/contest/545/submission/18454030

#include <iostream>
#include <string>
using namespace std;


int main() {
	string a, b, rez = "";
	int diffa = 0, diffb = 0, len;
	cin >> a >> b;
	len = a.size();
	for (int i = 0; i < len; i++) {
		if (a[i] == b[i]) rez += a[i];
		else {
			if (diffa > diffb) {
				diffb++;
				rez += b[i];
			}
			else diffa++, rez += a[i];
		}
	}
	if (diffa != diffb) rez = "impossible";
	cout << rez;
	return EXIT_SUCCESS;
}