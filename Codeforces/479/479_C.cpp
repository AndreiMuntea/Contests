// https://codeforces.com/contest/479/problem/C
// https://codeforces.com/contest/479/submission/17480481

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _ELEM {
	int o1, o2;
}ELEM;

int main() {

	ELEM v[5001];
	int n, maxs;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> v[i].o1 >> v[i].o2;
	sort(v, v + n, [](ELEM st, ELEM dr) {return (st.o1 < dr.o1 || st.o1 == dr.o1 && st.o2 < dr.o2); });
	maxs = min(v[0].o1, v[0].o2);
	for (int i = 1; i < n; i++)
		(min(v[i].o1, v[i].o2) >= maxs) ? maxs = min(v[i].o1, v[i].o2) : maxs = max(v[i].o1, v[i].o2);
	cout << maxs;
	return EXIT_SUCCESS;
}