// https://codeforces.com/contest/1030/problem/A
// https://codeforces.com/contest/1030/submission/46625301


#include <iostream>

using namespace std;

int main()
{
    int n;
    bool res = false, b = false;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> b;
        res = res || b;
    }
    
    res ? cout << "hard"
        : cout << "easy";

    return 0;
}