// https://codeforces.com/contest/381/problem/A
// https://codeforces.com/contest/381/submission/17434256

#include <iostream>
using namespace std;


int main()
{
	int v[1001], n, Sereja = 0, Dima = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> v[i];
	for (int c = 0, j = n - 1, i = 0; i <= j;) {
		if (c == 0) {
			if (v[i] > v[j]) Sereja += v[i], i++;
			else Sereja += v[j], j--;
			c = 1;
		}
		else {
			if (v[i] > v[j]) Dima += v[i], i++;
			else Dima += v[j], j--;
			c = 0;
		}
	}
	cout << Sereja << " " << Dima << endl;
	return EXIT_SUCCESS;
}

