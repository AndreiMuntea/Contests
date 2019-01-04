// https://codeforces.com/contest/567/problem/B
// https://codeforces.com/contest/567/submission/17567475

#include <iostream>
using namespace std;


int main() {

	int n, max = 0, curr = 0, numb;
	char x, v[1000001];
	memset(v, '0', 1000001 * sizeof(char));

	cin >> n;
	for (; n > 0; n--) {
		getchar();
		x = getchar();
		cin >> numb;
		if (x == '+') {
			curr++;
			v[numb] = '1';
		}
		else {
			if (v[numb] == '0') max++;
			else curr--, v[numb] = '0';
		}
		if (curr > max) max = curr;
	} 
	cout << max;
	return EXIT_SUCCESS;
}