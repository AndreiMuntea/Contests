// https://codeforces.com/contest/465/problem/B
// https://codeforces.com/contest/465/submission/18017411

#include <iostream>
using namespace std;

int main() {

	int n, x = 0, t = 0, i = 0;
	bool ok1 = false, ok2 = false;
	cin >> n;
	while (i < n && x == 0) cin >> x, i++;
	if (x == 1) t++;
	while (i < n) {
		cin >> x;
		i++;
		if (x == 1) {
			t++;
			if (ok1 == true) t++;
			ok1 = false; ok2 = false;
		}
		else if (x == 0 && ok1 == false) ok1 = true;
		else if (x == 0 && ok1 == true && ok2 == false) ok2 = true;
	}
	cout << t;

	return EXIT_SUCCESS;
}