// https://codeforces.com/gym/101246/problem/B
// https://codeforces.com/gym/101246/submission/25244690

#include <iostream>
#include<fstream>
#include<string>

#define cin f
#define cout g

using namespace std;


int mat[110][110];

int main()
{

    ifstream f("input.txt");
    ofstream g("output.txt");
    int n, m;

    f>>n>>m;
    string s;
    for(int i=1; i<=n; i++)
    {
        f>>s;
        for(int j=1; j<=m; j++)
            mat[i][j] =(s[j-1]-'0') ;
    }

    int sol=0;

    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
        {
            if(mat[i][j]!=0)sol+=2;
            sol+= (max(0, mat[i][j]-mat[i-1][j])+  max(0, mat[i][j]-mat[i+1][j])+  max(0, mat[i][j]-mat[i][j-1])+  max(0, mat[i][j]-mat[i][j+1]));
        }
    }

    g<<sol<<endl;
    f.close();
    g.close();

    return 0;
}