// https://codeforces.com/contest/835/problem/A
// https://codeforces.com/contest/835/submission/29155915

// Example program
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int mat[12][102][102];

int main()
{
    int s, v1, v2, t1, t2, r1, r2 ;
    scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);
    r1 = v1 * s + 2 * t1;
    r2 = v2 * s + 2 * t2;
    
    if (r1 < r2) cout << "First";
    else if (r2 < r1 ) cout << "Second";
    else cout << "Friendship";
    return 0;    
}
