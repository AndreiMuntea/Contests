// https://codeforces.com/contest/507/problem/B
// https://codeforces.com/contest/507/submission/18029581

#include <cstdio>
#include <cstdlib>
#include <cmath>


int main() {

	long r, x1, y1, x2, y2;
	double dist, ct = 0;
	scanf("%ld %ld %ld %ld %ld", &r, &x1, &y1, &x2, &y2);
	dist = (sqrt(double(x1 - x2) * double(x1 - x2) + double(y1 - y2) * double(y1 - y2)));
	if (x1 == x2 &&  y1 == y2) goto out;
	ct = ceil(dist / r / 2.0);
	
out:
	printf("%.0lf", ct);
	return EXIT_SUCCESS;
}