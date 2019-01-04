// https://codeforces.com/gym/101021/problem/A
// https://codeforces.com/gym/101021/submission/18652939

#include <iostream>
#include <string>
using namespace std;

#define MAX 1000000
#define MIN 1

void cautBin() {
	int mid, lo = MIN, hi = MAX;
	string ans;

	while (hi > lo ) {
		mid = (lo + hi) / 2;
		cout << mid << "\n";
		fflush(stdout);
		cin >> ans;
		if (ans == "<") hi = --mid;
		else (lo = mid);
		if (lo >= hi - 1) {
			cout << mid + 1 <<"\n";
			fflush(stdout);
			cin >> ans;
			if (ans == "<") {
				cout << mid <<"\n";
				fflush(stdout);
				cin >> ans;
				if (ans == "<") cout << "! " << mid - 1 << "\n";
				else cout << "! " << mid << "\n";
			}else cout << "! " << mid + 1 << "\n";
			lo = hi + 1;
		}
	}
}

int main() {

	cautBin();
	return EXIT_SUCCESS;
}