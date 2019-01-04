// https://codeforces.com/contest/535/problem/B
// https://codeforces.com/contest/535/submission/17147803

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	char str[11];
	
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		n <<= 1;
		if (str[i] == '4') n++;
		else n += 2;
	}

	cout << n;
	return EXIT_SUCCESS;
}

