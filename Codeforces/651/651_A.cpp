// https://codeforces.com/contest/651/problem/A
// https://codeforces.com/contest/651/submission/17366362

#include <iostream>



int main() {
	int cont, a, b;
	std::cin >> a >> b;
	if (a == b && b == 1) a = 0;
	for (cont = 0; a != 0 && b != 0; cont++) {
		if (a > b) a -= 2, b++;
		else a++, b -= 2;
	}
	std::cout << cont;

	return EXIT_SUCCESS;
}