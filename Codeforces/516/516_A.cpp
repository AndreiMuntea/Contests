// https://codeforces.com/contest/516/problem/A
// https://codeforces.com/contest/516/submission/17291786

#include <iostream>
#include <string>
#include <algorithm>

void ptchar(std::string& s)
{
	char x = getchar();
	if (x == '2' || x == '3' || x == '5' || x == '7') s+=x;
	else if (x == '4') s += "322"; 
	else if (x == '6') s += "53";
	else if (x == '8') s += "2227";
	else if (x == '9') s += "3327"; 
}

int main()
{
	int n;
	std::string s;
	
	std::cin >> n;
	getchar();
	for (; n > 0; n--) ptchar(s);
	std::sort(s.begin(), s.end(), [](const char l, const char r) {return (r < l); });
	std::cout << s;
	return EXIT_SUCCESS;
}

