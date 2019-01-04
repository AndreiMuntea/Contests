// https://codeforces.com/contest/611/problem/A
// https://codeforces.com/contest/611/submission/16614944

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {

	int months[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 }, days[] = { 0,52,52,52,52,53,53,52 }, n, sum = 0;
	char s[10];
	cin >> n >> s >> s;
	if (!strcmp(s, "week")) cout << days[n];
	else {
		for (int i = 1; i <= 12; i++) if (months[i] >= n) sum++;
		cout << sum;
	}
	return EXIT_SUCCESS;
}