// https://codeforces.com/contest/456/problem/B
// https://codeforces.com/contest/456/submission/17592868

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	if (s.size() == 1) {
		if (s[0] == '0' || s[0] == '4' || s[0] == '8') putchar('4');
		else putchar('0');
	} 
	else {
		if (stoi(s.substr(s.size() - 2, 2)) % 4 == 0) putchar('4');
		else putchar('0');
	}
	return EXIT_SUCCESS;
}