// https://codeforces.com/contest/785/problem/B
// https://codeforces.com/contest/785/submission/25527550

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


typedef struct point{
   int x;
   int y;
}point;




bool compare(const point& a, const point&b)
{
   return a.x < b.x || (a.x == b.x && a.y < b.y);
}

bool compareb(const point& a, const point&b)
{
   return a.y < b.y || (a.y == b.y && a.x < b.x);
}

int dist(const point& a, const point& b)
{
   if (a.x <= b.x && b.x <= a.y) return 0;
   if (a.x <= b.y && b.y <= a.y) return 0;
   if (b.x <= a.x && a.x <= b.y) return 0;
   if (b.x <= a.y && a.y <= b.y) return 0;
   if (a.y < b.x) return b.x - a.y;
   return a.x - b.y;
}



int n, m;
int mx = 0;
vector<point> a, b;


void bsearch(const point& x)
{
   int mid, lo = 0, hi = m - 1, p =0;
   point k;
   while(lo <= hi)
   {
      mid = (lo + hi) / 2;
      k = b[mid];
      p = dist(x, k);
      mx = max(p, mx);
      lo = mid + 1;
   }

   lo = 0, hi = m - 1;
   while (lo <= hi)
   {
      mid = (lo + hi) / 2;
      k = b[mid];
      p = dist(x, k);
      mx = max(p, mx);
      hi = mid - 1;
   }
}


int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   point k;

   cin >> n;
   for(int i = 0; i< n; ++i)
   {
      cin >> k.x >> k.y;
      a.push_back(k);
   }

   cin >> m;
   for(int i = 0; i < m; ++i)
   {
      cin >> k.x >> k.y;
      b.push_back(k);
   }

   sort(a.begin(), a.end(), compare);
   sort(b.begin(), b.end(), compareb);

   for (int i = 0; i < n; ++i) bsearch(a[i]);


   sort(a.begin(), a.end(), compareb);
   sort(b.begin(), b.end(), compare);

   for (int i = 0; i < n; ++i) bsearch(a[i]);



   cout << mx;

   return 0;
}