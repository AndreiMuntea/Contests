// https://codeforces.com/contest/43/problem/A
// https://codeforces.com/contest/43/submission/18055085

#include <string>
#include <iostream>
using namespace std;


int main() {

	string read, a, ot;
	int scoreA = 0, scoreB = 0, n;
	
	cin >> n;
	cin >> a;
	scoreA++;
	for (; n > 1; n--) {
		cin >> read;
		if (a == read) scoreA++;
		else scoreB++, ot = read;
	}
	(scoreA > scoreB) ? cout<<a : cout<<ot;

	return EXIT_SUCCESS;
}