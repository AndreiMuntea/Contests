// https://codeforces.com/contest/508/problem/B
// https://codeforces.com/contest/508/submission/17535879

#include <string>
#include <iostream>
using namespace std;

int main() {

	int max = -9, poz = -1;
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++) {
		if ((s[i] - '0') % 2 == 0) {
				if (s[s.size()-1] > s[i] && max < 0){
					max = 0;
					poz = i;
				}
				else if (max!=0) {
					poz = i;
				}
		}
	}
	if (poz == -1) puts("-1");
	else {
		char c = s[s.size() - 1];
		s[s.size() - 1] = s[poz];
		s[poz] = c;
		cout<<s;
	}


	return EXIT_SUCCESS;
}