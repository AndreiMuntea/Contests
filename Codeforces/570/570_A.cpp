// https://codeforces.com/contest/570/problem/A
// https://codeforces.com/contest/570/submission/14395674

#include <iostream>

using namespace std;

long long v[102];

int main()
{
    int n,m,x;
    int cand_for_city,cand_index,grand_total=-1,total_index=-1;
    cin>>m>>n;
    for (int i=1;i<=n;i++)
    {
        cand_for_city = -1;

        for (int j=1;j<=m;j++)
        {
            cin>>x;
            if (x>cand_for_city)
            {
                cand_for_city = x;
                cand_index = j;
            }
        }
    v[cand_index]++;
    if (grand_total<v[cand_index]||(grand_total==v[cand_index] && cand_index<total_index))
    {
        grand_total=v[cand_index];
        total_index=cand_index;
    }
    }
    cout<<total_index;
    return 0;
}
