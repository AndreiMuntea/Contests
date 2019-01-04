// https://codeforces.com/contest/548/problem/A
// https://codeforces.com/contest/548/submission/17433560

#include <iostream>
#include <string>
using namespace std;

bool ispal(const string& p);

int main() {

	string s,p;
	int n,sz;
	cin >> s >> n;
	if (s.size() % n != 0) { puts("NO"); goto Clean; }
	sz = s.size() / n;
	for (int pivot = 0; pivot < n; pivot++) {
		p = s.substr(sz*pivot, sz);
		if (!ispal(p)) { puts("NO"); goto Clean; };
	}
	puts("YES");
Clean:
	return EXIT_SUCCESS;
}
bool ispal(const string& p) {
	int size = p.size();
	for (int i = 0; i < size / 2; i++) {
		if (p[i] != p[size - i - 1]) return false;
	}
	return true;
}