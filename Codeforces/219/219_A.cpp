// https://codeforces.com/contest/219/problem/A
// https://codeforces.com/contest/219/submission/18041939

#include <iostream>
#include <string>
using namespace std;


int main() {
	int n, v[28], min;
	string s;
	cin >> n >> s;
	min = n;
	memset(v, 0, 28 * sizeof(int));

	for (size_t i = 0; i < s.size(); i++) v[s[i] - 'a']++;
	for (size_t i = 0; i < 28; i++) {
		if (v[i] != 0) {
			if (v[i] % n != 0) {
				cout << -1;
				goto exit;
			}
			else if (min > v[i]) min = v[i];
		}
	}
	for (int i = 0; i < min; i++) {
		for (size_t j = 0; j < 28; j++) {
			for (int k = 0; k < v[j] / n; k++) {
				putchar(j + 'a');
			}
		}
	}

exit:
	return EXIT_SUCCESS;
}