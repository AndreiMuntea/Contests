// https://codeforces.com/contest/447/problem/B
// https://codeforces.com/contest/447/submission/18017766

#include <iostream>
#include <string>
using namespace std;


int main() {

	string s;
	long long k, max = 0, sum = 0, v[26];

	cin >> s >> k;

	for (size_t i = 0; i < 26; i++) {
		cin >> v[i];
		if (v[i] > max) max = v[i];
	}

	for (size_t i = 0; i < s.size(); i++) {
		sum += (v[s[i] - 'a']) * (i + 1);
	}
	for (size_t i = s.size() + 1; i <= s.size() + k; i++) {
		sum += max*i;
	}
	cout << sum;

	return EXIT_SUCCESS;
}