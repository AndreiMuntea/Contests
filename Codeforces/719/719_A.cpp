// https://codeforces.com/contest/719/problem/A
// https://codeforces.com/contest/719/submission/22851797

#include <iostream>
using namespace std;

int main()
{
	int n;
	int a,b;
	cin>>n;
	cin>>b;
	for(int i = 2; i<=n; ++i)
	{
		a = b;
		cin>>b;
	}
	if (b == 0) puts("UP");
	else if (b == 15) puts("DOWN");
	else if (n == 1) puts("-1");
	else if (b - a > 0) puts("UP");
	else puts("DOWN");
	return 0;
}