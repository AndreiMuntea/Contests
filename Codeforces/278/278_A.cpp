// https://codeforces.com/contest/278/problem/A
// https://codeforces.com/contest/278/submission/17335998

#include <iostream>
#include <algorithm>

void swap(int&x, int&y)
{
	int aux;
	aux = x;
	x = y;
	y = aux;
}

int main()
{
	int n, v[105], x, y;
	v[1] = v[0] = 0;
	std::cin >> n;
	for (int i = 2; i <= n + 1; i++)
	{
		std::cin >> x;
		v[i] = v[i - 1] + x;
	}
	std::cin >> x >> y;
	if (x > y) swap(x, y);
	std::cout << std::min(v[y] - v[x], v[x] + v[n + 1] - v[y]);

    return EXIT_SUCCESS;
}

