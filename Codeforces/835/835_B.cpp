// https://codeforces.com/contest/835/problem/B
// https://codeforces.com/contest/835/submission/29156583

// Example program
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int v[10];

int main()
{
    int k,  s = 0, res = 0, pk = 0;
    cin >> k;
    getchar();
    
    
    for(char c = getchar(); c!='\n'; c = getchar())
    {
        v[c-'0']++;
        s += (c-'0');
    }

    res = max(0, k - s);
    for (int i = 0; i < 10 && res ;++i)
    {
        if(!v[i])continue;
        k = (9 - i) * v[i];
        if (k - res >= 0)
        {
            pk += (res / (9-i) + (res %(9-i) !=0));
            res = 0;
        }
        else
        {
            res -= k;
            pk += v[i];
        }
    }
    cout<<pk;
    
    return 0;    
}
