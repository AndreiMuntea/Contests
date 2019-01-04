// https://codeforces.com/contest/474/problem/B
// https://codeforces.com/contest/474/submission/15134437

#include <iostream>
using namespace std;

struct entity
{
    int first_in_pile,last_in_pile;
};

entity piles[100001];

int search_bin(int lo, int hi, int x)
{
    int mid = (lo+hi) / 2;
    while (lo <= hi)
    {
        if (piles[mid].first_in_pile > x) hi = mid - 1;
        else if (piles[mid].last_in_pile < x) lo = mid + 1;
        else return mid;
        mid = (lo + hi) / 2;
    }
}

int main()
{
    int m,x,n,worms = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        piles[i].first_in_pile = worms + 1;
        piles[i].last_in_pile = worms + x;
        worms += x;

    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        cout << search_bin(1,n,x)<<"\n";
    }
    return 0;
}
