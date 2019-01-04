// https://codeforces.com/contest/476/problem/B
// https://codeforces.com/contest/476/submission/46794053

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int output = 0, actual = 0, unknown = 0, need = 0;

void Parse(const string& input, const string& expected)
{
	for (auto& c : input)
	{
		(c == '+') ? output = output + 1
				   : output = output - 1;
	}

	for (auto& c : expected)
	{
		if (c == '+') actual = actual + 1;
		if (c == '-') actual = actual - 1;
		if (c == '?') unknown = unknown + 1;
	}
}

unsigned long long Comb(unsigned long long n, unsigned long k)
{
	unsigned long long fact[12];
	fact[0] = 1;
	for (int i = 1; i < 12; ++i) fact[i] = i * fact[i - 1];

	return fact[n] / (fact[k] * fact[n - k]);
}

double GetSol()
{
	if (need > unknown) return 0;
	if ((unknown - need) % 2 != 0) return 0;
	
	need = need + (unknown - need) / 2;
	auto comb = Comb(unknown, need);

	return static_cast<double>(comb) / static_cast<double>(1 << unknown);
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	Parse(s1, s2);

	need = abs(output - actual);
	cout << setprecision(12) << fixed << GetSol();
	return 0;
}