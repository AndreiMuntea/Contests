// https://codeforces.com/contest/766/problem/B
// https://codeforces.com/contest/766/submission/46828176

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x;
	scanf("%d", &n);
	vector<int> v(n, 0);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		v[i] = x;
	}
	sort(v.begin(), v.end());


	bool ok = false;
	for (size_t i = 2; !ok && i < v.size(); ++i)
	{
		ok = (v[i - 2] + v[i - 1]) > v[i];
	}

	(ok) ? cout << "YES" : cout << "NO";

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x;
	cin >> n;
	vector<int> v(n, 0);

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		v[i] = x;
	}
	sort(v.begin(), v.end());


	bool ok = false;
	for (size_t i = 2; !ok && i < v.size(); ++i)
	{
		ok = (v[i - 2] + v[i - 1]) > v[i];
	}

	(ok) ? cout << "YES" : cout << "NO";

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n, x;
	cin >> n;
	vector<int> v(n, 0);

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		v[i] = x;
	}
	sort(v.begin(), v.end());


	bool ok = false;
	for (size_t i = 2; !ok && i < v.size(); ++i)
	{
		ok = (v[i - 2] + v[i - 1]) > v[i];
	}

	(ok) ? cout << "YES" : cout << "NO";

	return 0;
}