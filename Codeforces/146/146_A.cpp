// https://codeforces.com/contest/146/problem/A
// https://codeforces.com/contest/146/submission/17291944

#include <iostream>
#include <string>

int main() {

	int n, s1 = 0, s2 = 0;
	std::string nm;
	std::cin >> n >> nm;
	for (int i = 0; i < n / 2; i++)
	{
		if (nm[i] != '4' && nm[i] != '7' || nm[n - i - 1] != '4' && nm[n - i - 1] != '7') { std::cout << "NO"; goto EXIT; }
		else { s1 += nm[i] - '0'; s2 += nm[n - i - 1] - '0';}
	}
	if (s1 != s2) std::cout << "NO";
	else std::cout << "YES";

EXIT:
	return EXIT_SUCCESS;
}