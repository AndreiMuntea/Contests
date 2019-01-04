// https://codeforces.com/contest/835/problem/C
// https://codeforces.com/contest/835/submission/29152450

// Example program
#include <stdio.h>
#include <string>
using namespace std;

int mat[12][102][102];

int main()
{
    int n,q,c,p,x,y,t,x1,y1,x2,y2, sum;
    scanf("%d %d %d", &n, &q, &c);
    
    
    for (int i = 0; i < n; ++ i)
    {
        scanf("%d %d %d", &x, &y, &p);
        mat[p][x][y]++;
    }
    
    for (int k = 0; k <= c; ++ k)
    {
        for (int i = 100; i >= 0; --i)
        {
            for(int j = 100; j >= 0; --j)
            {
                mat[k][i][j] = mat[k][i][j] + mat[k][i+1][j] + mat[k][i][j+1] - mat[k][i+1][j+1];
            }
        }
    }
    
    while(q--)
    {
        scanf("%d %d %d %d %d", &t, &x1, &y1, &x2, &y2);
        sum = 0;
        for (int i = 0; i <= c; ++i)
        {
            sum += (mat[i][x1][y1]  - mat[i][x1][y2+1] - mat[i][x2+1][y1] + mat[i][x2+1][y2+1]) * ((i + t) % (c+1));
        }
        
        printf("%d\n", sum);
    }
    
    

    return 0;    
}

// Example program
#include <iostream>
#include <string>
using namespace std;

int mat[12][102][102];

int GetSum(int x1, int y1, int x2, int y2, int t, int c)
{
    int sum = 0;
    for (int i = 0; i <= c; ++i)
    {
        sum += (mat[i][x1][y1]  - mat[i][x1][y2+1] - mat[i][x2+1][y1] + mat[i][x2+1][y2+1]) * ((i + t) % (c+1));
    }
    return sum;
}

int main()
{
    int n,q,c,p,x,y,t,x1,y1,x2,y2;
    cin >>n >> q >> c;
    
    
    for (int i = 0; i < n; ++ i)
    {
        cin >> x >> y >> p;
        mat[p][x][y]++;
    }
    
    for (int k = 0; k <= c; ++ k)
    {
        for (int i = 100; i >= 0; --i)
        {
            for(int j = 100; j >= 0; --j)
            {
                mat[k][i][j] = mat[k][i][j] + mat[k][i+1][j] + mat[k][i][j+1] - mat[k][i+1][j+1];
            }
        }
    }
    
    while(q--)
    {
        cin >> t >> x1 >> y1 >> x2 >> y2;
        cout << GetSum(x1,y1,x2,y2,t,c) << "\n";
    }
    
    

    return 0;    
}
