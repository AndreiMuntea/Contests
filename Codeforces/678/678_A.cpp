// https://codeforces.com/contest/678/problem/A
// https://codeforces.com/contest/678/submission/18418106

#include <iostream>
using namespace std;

int main() {
	int n, k, nr = 1;
	cin >> n >> k;
	nr += n / k;

	cout << k * nr;



	return 0;
}