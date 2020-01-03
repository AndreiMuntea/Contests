// https://codeforces.com/problemset/problem/1191/A
// https://codeforces.com/contest/1191/submission/68001731

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);


    int x;
    cin >> x;

    if (x % 4 == 0) cout << "1 A";
    else if (x % 4 == 1) cout << "0 A";
    else if (x % 4 == 2) cout << "1 B";
    else cout << "2 A";

    return 0;
}