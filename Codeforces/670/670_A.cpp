// https://codeforces.com/contest/670/problem/A
// https://codeforces.com/contest/670/submission/30912901

#include <iostream>
#include <algorithm>
using namespace std;

inline int GetMin(const int& n)
{
	switch (n % 7)
	{
	case 6:  return (n / 7) * 2 + 1;
	default: return (n / 7) * 2;
	}
}

inline int GetMax(const int& n)
{
	switch (n % 7)
	{
	case 0:  return (n / 7) * 2;
	case 1:  return (n / 7) * 2 + 1;
	default: return (n / 7) * 2 + 2;
	}
}

int main()
{
	int n = 0;
	
	cin >> n;
	cout << GetMin(n) << " " << GetMax(n);
	return 0;
}