// https://codeforces.com/contest/680/problem/C
// https://codeforces.com/contest/680/submission/18453437

#include <iostream>
#include <string>
using namespace std;


int main() {

	int lst[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71 };
	int i, cnt = 0, nr, tmp = 0;
	string s;
	for (i = 1; i <= 20; i++) {
		cout << lst[i - 1] << "\n";
		fflush(stdout);
		cin >> s;
		fflush(stdin);
		if (s == "yes") nr = lst[i - 1], cnt++;
		if (cnt > 0) break;
	}
	for (; i < 20; i++) {
		(nr*lst[i - 1] <= 100) ? cout << nr*lst[i - 1] << "\n" : cout << lst[i] << " ";
		fflush(stdout);
		cin >> s;
		fflush(stdin);
		if (s == "yes") cnt++;
		if (cnt > 1) break;
	}

	fflush(stdout);
	(cnt > 1) ? puts("composite") : puts("prime");


	return EXIT_SUCCESS;
}