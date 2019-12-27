// https://codeforces.com/problemset/problem/1114/A
// https://codeforces.com/contest/1114/submission/67692580

#include <iostream>
#include <algorithm>
using namespace std;

bool SolveAndrew(int& Andrew, int& green)
{
    if (green < Andrew)
    {
        return false;
    }

    green -= Andrew;
    return true;
}

bool SolveDimitry(int& Dimitry, int& green, int& purple)
{
    if (green + purple < Dimitry)
    {
        return false;
    }

    if (green < Dimitry)
    {
        Dimitry -= green; 
        green = 0;
        purple -= Dimitry;
    }
    else
    {
        green -= Dimitry;
    }
    return true;
}

bool SolveMichael(int& Michael, int& green, int& purple, int& black)
{
    if (green + purple + black < Michael)
    {
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int Andrew, Dimitry, Michael;
    cin >> Andrew >> Dimitry >> Michael;

    int green, purple, black;
    cin >> green >> purple >> black;

    bool ok = SolveAndrew(Andrew, green) && 
              SolveDimitry(Dimitry, green, purple) && 
              SolveMichael(Michael, green, purple, black);

    (ok) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}