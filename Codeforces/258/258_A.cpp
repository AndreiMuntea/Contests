// https://codeforces.com/contest/258/problem/A
// https://codeforces.com/contest/258/submission/17172639

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	bool ok = (line[0] == '1');
	int i = 0, len = line.length();

	while (ok == true && i < len - 1)
	{
		putchar('1');
		i++;
		ok = line[i] == '1';
	}

	if (ok == true || i == len - 1) return 0;
	i++;
	for (; i < len;i++) putchar(line[i]);

	return EXIT_SUCCESS;
}

