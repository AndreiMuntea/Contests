// https://codeforces.com/contest/651/problem/B
// https://codeforces.com/contest/651/submission/47181097

#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


int main()
{
	int n, x, nr = 0;
	
	map<int, int> frecv;
	set<int> elements;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		frecv[x]++;
		elements.insert(x);
	}

	for (auto& keyValuePair : frecv)
	{
		while (keyValuePair.second != 0)
		{
			--keyValuePair.second;
			auto current = keyValuePair.first;
			for (auto next = elements.upper_bound(current); next != elements.end(); next = elements.upper_bound(current))
			{
				++nr;
				current = *next;
				if (--frecv[current] == 0)
				{
					elements.erase(current);
				}
			}
		}

	}
	cout << nr;

	return 0;
}