// https://www.spoj.com/problems/ABCPATH/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstring>
#include <queue>
#include <string>
using namespace std;

#define ll long long
#define ull unsigned long long

/*------------------------------------------------------------------*/

char mat[55][55];
int vis[55][55];
int vec[30];
int h, w;
int best = 0;
int arrx[] = { -1,0,1,1,1,0,-1,-1 };
int arry[] = { -1,-1,-1,0,1,1,1,0 };
queue<pair<int, int>> boje;

void citire()
{
   string s;
   for (int i = 1; i <= h; ++i)
   {
      cin >> s;
      for (int j = 1; j <= w; ++j)
      {
         vis[i][j] = 0;
         mat[i][j] = s[j - 1];
         if (mat[i][j] == 'A') boje.push(make_pair(i, j));
      }
   }
}

void solve(int x, int y, char c, int current)
{
   if (current > best) best = current;
   vis[x][y] = 1;
   int tx, ty;

   for (int i = 0; i < 8; ++i)
   {
      tx = arrx[i] + x;
      ty = arry[i] + y;
      if ((mat[tx][ty] == c + 1) && vis[tx][ty] == 0)
         solve(tx, ty, mat[tx][ty], current + 1);
   }
}


int main()
{
   //ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   cin >> h >> w;
   pair<int, int> psd;
   int ct = 1;

   while (h != 0 && w != 0)
   {
      best = 0;
      citire();
      while (!boje.empty())
      {
         psd = boje.front();
         boje.pop();
         solve(psd.first, psd.second, mat[psd.first][psd.second], 1);
      }
      printf("Case %d: %d\n", ct, best);
      ct++;
      cin >> h >> w;
   }

   return 0;
}