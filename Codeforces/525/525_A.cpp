// https://codeforces.com/contest/525/problem/A
// https://codeforces.com/contest/525/submission/17557255

#include <iostream>
#include <string>
using namespace std;


int main() {

	string s; 
	int n, ABC[27], nr, i;
	memset(ABC, 0, 27 * sizeof(int));
	cin >> n >> s;
	for (i = 0, nr = 0; i < s.size(); i++){
		if (i & 1) {
			if (ABC[s[i] - 'A']) ABC[s[i] - 'A'] -- ;
			else nr++;
		}
		else ABC[s[i] - 'a'] ++;
	}
	cout << nr;


	return EXIT_SUCCESS;
}