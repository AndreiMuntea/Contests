// https://codeforces.com/gym/101191/problem/C
// https://codeforces.com/gym/101191/submission/47897843

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void init(vector<long long>& v)
{
	v.push_back(0);
	v.push_back(1);
	for (long long i = 2; v.back() <= 1e9; ++i)
	{
		v.push_back(v.back() + i);
	}
}

long long bin_search(vector<long long>& v, long long X)
{
	long long lo = 0;
	long long hi = v.size() - 1;
	long long idx = 0;

	while (lo <= hi)
	{
		long long mi = (lo + hi) / 2;

		if (v[static_cast<size_t>(mi)] > X) hi = mi - 1;
		else idx = mi, lo = mi + 1;
	}

	return idx;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	vector<long long> sums;
	string cbs = "";
	long long n = 0;

	cin >> n;
	init(sums);

	while(n > 0)
	{
		cbs = "(" + cbs + ")";
		--n;
		
		string nextCbs = "(";
		auto idx = bin_search(sums, n - 2);
		for (long long i = 0; i < idx; ++i) nextCbs += "()";
		nextCbs += ")";

		long long total = sums[static_cast<size_t>(idx)] + 2;
		if (n - total >= 0) cbs += nextCbs, n -= total;
	}

	
	cout << cbs;
	return 0;
}