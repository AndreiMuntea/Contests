// https://codeforces.com/contest/320/problem/A
// https://codeforces.com/contest/320/submission/17146992

#include <iostream>
#include <string>
using namespace std;

#define YES true
#define NO !true

int main()
{
	int i;
	string s;
	bool ok;

	i  = 0;
	ok = YES;
	cin >> s;
	
	while (i < s.length())
	{
		if (s[i] == '1')
		{
			if ( (i + 1) < s.length() && s[i + 1] == '4')
			{
				
				if ( (i + 2) < s.length() && s[i + 2] == '4') i++;
				i++;
			}
			i++;
		}
		else { ok = NO; i++; }
	}

	if (ok) cout << "YES";
	else cout << "NO";

	return EXIT_SUCCESS;
}