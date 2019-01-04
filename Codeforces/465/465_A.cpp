// https://codeforces.com/contest/465/problem/A
// https://codeforces.com/contest/465/submission/17145967

#include <iostream>
using namespace std;


int main()
{

	int n, count = 1;
	char x;
	bool ok = true;

	cin >> n;
	getchar();

	while (ok)
	{
		x = getchar();

		if (x != '1') ok = false;
		else count++;
	}
	if (x != '0') count--;
	cout << count;
	return EXIT_SUCCESS;
}