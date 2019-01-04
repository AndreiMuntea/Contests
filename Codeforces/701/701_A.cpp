// https://codeforces.com/contest/701/problem/A
// https://codeforces.com/contest/701/submission/21841936

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct _STR
{
   int idx, value;
   _STR() { idx = 0, value = 0; }
   _STR(int idx, int value) { this->idx = idx, this->value = value; }
}STR;

bool compare(STR l, STR r)
{
   return l.value < r.value;
}

int main()
{
   vector<STR> vct;
   int n, x;

   scanf("%d", &n);
   for (int i = 1; i <= n; ++i)
   {
      scanf("%d", &x);
      vct.push_back(STR(i, x));
   }
   sort(vct.begin(), vct.end(), compare);
   
   int i = 0;
   --n;
   while (i < n)
   {
      printf("%d %d\n", vct[i].idx, vct[n].idx);
      ++i, --n;
   }

   return EXIT_SUCCESS;
}