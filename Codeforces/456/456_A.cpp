// https://codeforces.com/contest/456/problem/A
// https://codeforces.com/contest/456/submission/16613518

#include <iostream>
#include <malloc.h>
#include <algorithm>
using namespace std;


typedef struct {
	int quality, price;
}MyVector;

bool compare(MyVector a, MyVector b) { return a.price < b.price; }
char* solve(MyVector*, int);

int main(int argc, char*argv[]) {

	int n;
	MyVector *v;
	cin >> n;
	v = (MyVector*)malloc(n*sizeof(MyVector));
	for (int i = 0; i < n; i++) cin >> v[i].price >> v[i].quality;
	sort(v, v + n, compare);
	cout << solve(v, n);
	free(v);
	return EXIT_SUCCESS;
}

char* solve(MyVector* v, int size) {
	for (int i = 0; i < size - 1; i++) if (v[i].quality > v[i + 1].quality) return "Happy Alex";
	return "Poor Alex";
}