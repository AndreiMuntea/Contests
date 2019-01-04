// https://codeforces.com/contest/518/problem/A
// https://codeforces.com/contest/518/submission/18055216

#include <string>
#include <iostream>
using namespace std;


int main() {

	string s, t;
	size_t i;

	cin >> s >> t;
	
	for (i = s.size() - 1; i >= 0; i--) {
		if (s[i] != 'z') break;
	}
	s[i] = s[i] + 1;
	i++;
	for (; i < s.size(); i++) s[i] = 'a';
	(s < t) ? cout << s : cout << "No such string\n";
	
	return EXIT_SUCCESS;
}