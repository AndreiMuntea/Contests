// https://codeforces.com/contest/977/problem/A
// https://codeforces.com/contest/977/submission/46371984

#include <iostream>
using namespace std;


int main()
{
	unsigned long long n = 0;
	int k = 0;
	cin >> n >> k;

	while (k > 0)
	{
		if (n % 10 != 0)
		{
			if (k > n % 10)
			{
				k -= (n % 10);
				n -= (n % 10);
			}
			else
			{
				n -= k;
				k = 0;
			}
		}
		else
		{
			n = n / 10;
			--k;
		}
	}
	cout << n;

	return 0;
}