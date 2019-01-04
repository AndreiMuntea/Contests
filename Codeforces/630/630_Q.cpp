// https://codeforces.com/contest/630/problem/Q
// https://codeforces.com/contest/630/submission/17316827

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
	int lT, lP, lH;
	double V;
	std::cin >> lT >> lP >> lH;

	V = (lT*lT*lT) /( 6.0*sqrt(2.0)) + (lP*lP*lP*sqrt(2.0)) / 6.0 + (5.0 + sqrt(5.0))*lH*lH*lH / 24.0;
	printf("%.10lf", V);

    return EXIT_SUCCESS;
}

