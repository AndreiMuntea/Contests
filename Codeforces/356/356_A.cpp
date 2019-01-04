// https://codeforces.com/contest/356/problem/A
// https://codeforces.com/contest/356/submission/25574265

#include <iostream>
using namespace std;

const int MAXN = 300009;

int tata[MAXN];
int beatenBy[MAXN];

int n, m;

int find(int x)
{
   if (x == tata[x]) return x;
   return tata[x] = find(tata[x]);
}


int main()
{

   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   
   cin >> n >> m;
   for(int i = 1; i<=n; ++i)
   {
      beatenBy[i] = 0;
      tata[i] = i;
   }
   tata[n + 1] = n + 1;

   int l, r, winner,sef;

   for(int i = 1; i<=m; ++i)
   {
      cin >> l >> r >> winner;
      sef = find(l);
      while(sef <= r)
      {

         if (sef == winner)
         {
            sef++;
         }
         else {
            beatenBy[sef] = winner;
            tata[sef] = sef + 1;
         }
         sef = find(sef);
      }
   }

   for (int i = 1; i <= n; ++i) cout << beatenBy[i] << " ";

   



   return 0;
}