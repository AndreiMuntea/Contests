// https://codeforces.com/contest/798/problem/A
// https://codeforces.com/contest/798/submission/46797924

#include <iostream>
#include <string>
using namespace std;

int Sol(const std::string& s)
{
	int nr = 0;
	for (size_t i = 0, j = s.size() - 1; i < j; ++i, --j)
	{
		if (s[i] != s[j]) nr++;
	}
	
	if (nr == 0 && s.size() % 2 != 0) return 1;
	return nr;
}

int main()
{
	string s; 
	cin >> s;

	Sol(s) == 1 ? cout << "YES" : cout << "NO";

	return 0;
}