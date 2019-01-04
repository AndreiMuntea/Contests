// https://codeforces.com/contest/664/problem/A
// https://codeforces.com/contest/664/submission/17350147

#include <string>
#include <iostream>
using namespace std;


int main() {
	string a, b;
	cin >> a >> b;
	if (a != b)cout << "1";
	else cout << a;
	return EXIT_SUCCESS;
}