// https://codeforces.com/contest/313/problem/B
// https://codeforces.com/contest/313/submission/17171423

#include <iostream>
using namespace std;


int main(){

	int v[100001], n, m, l, r;
	char x, y = 'e';
	x = getchar();
	y = getchar();
	v[1] = 0;
	n = 1;
	while (y != '\n')
	{
		n++;
		if (x == y) v[n] = v[n - 1] + 1;
		else { v[n] = v[n-1]; x = y; }
		y = getchar();
	}
	cin >> m;
	for (; m > 0; m--)
	{
		cin >> l >> r;
		cout << v[r] - v[l] << endl;
	}
	
	return EXIT_SUCCESS;
}