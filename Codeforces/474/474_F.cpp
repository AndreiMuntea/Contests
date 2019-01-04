// https://codeforces.com/contest/474/problem/F
// https://codeforces.com/contest/474/submission/25364936

#include <iostream>
using namespace std;

#define NMAX 100005

int gcd(int a, int b)
{
   if (b == 0) return a;
   return gcd(b, a%b);
}

typedef struct arbore
{
   int cmmdc;
   int nmb;
   arbore() { cmmdc = nmb = 0; }

}arbore;

int n;
arbore arb[4 * NMAX];

void build(int node, int start, int end, int pos, int val)
{
   if (start == end)
   {
      arb[node].cmmdc = val;
      arb[node].nmb = 1;
      return;
   }
   int mid = (start + end) / 2;
   if (pos <= mid) build(node * 2, start, mid, pos, val);
   else build(node * 2 + 1, mid + 1, end, pos, val);
   
   arb[node].cmmdc = gcd(arb[node * 2].cmmdc, arb[node * 2 + 1].cmmdc);
   arb[node].nmb = 0;
   
   if (arb[node].cmmdc == arb[node * 2].cmmdc) arb[node].nmb += arb[node * 2].nmb;
   if (arb[node].cmmdc == arb[node * 2 + 1].cmmdc) arb[node].nmb += arb[node * 2 + 1].nmb;
}

arbore querry(int node, int start, int end, int left, int right)
{
   if (start > end || start > right || left > end) return arbore{};
   if (left <= start && end <= right) return arb[node];

   int mid = (start + end) / 2;
   
   arbore leftAns = querry(node * 2, start, mid, left, right);
   arbore rightAns = querry(node * 2 + 1, mid + 1, end, left, right);
   arbore ans{};
   ans.cmmdc = gcd(leftAns.cmmdc, rightAns.cmmdc);
   if (ans.cmmdc == leftAns.cmmdc) ans.nmb += leftAns.nmb;
   if (ans.cmmdc == rightAns.cmmdc) ans.nmb += rightAns.nmb;
   return ans;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   int m, x, i, a, b;   
   
   for(i = 1, cin>>n; i<=n; ++i)
   {
      cin >> x;
      build(1, 1, n, i, x);
   }

   cin >> m;
   for(;m--;)
   {
      cin >> a >> b;
      cout << (b - a + 1) - querry(1, 1, n, a, b).nmb << "\n";
   }

   return 0;
}