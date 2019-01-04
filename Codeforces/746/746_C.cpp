// https://codeforces.com/contest/746/problem/C
// https://codeforces.com/contest/746/submission/23095903

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
   int Sursa, igorPos, igorDest, vitezaIgor, vitezaTren, trenPos, directieTren, directieIgor;
   cin >> Sursa >> igorPos >> igorDest >> vitezaTren >> vitezaIgor >> trenPos >> directieTren;

   if (igorPos > igorDest) directieIgor = -1;
   else directieIgor = 1;

   int igorTime = abs(igorPos - igorDest) * vitezaIgor;
   int trainTime = 0;

   if (directieTren == 1 && directieIgor == -1)
   {
      trainTime += abs(trenPos - Sursa) * vitezaTren;
      trainTime += abs(Sursa - igorDest) * vitezaTren;
   }
   else if (directieTren == -1 && directieIgor == 1)
   {
      trainTime += trenPos * vitezaTren;
      trainTime += igorDest * vitezaTren;
   }
   else if (directieTren == 1 && directieIgor == 1 && igorPos < trenPos)
   {
      trainTime += abs(trenPos - Sursa) * vitezaTren;
      trainTime += Sursa * vitezaTren;
      trainTime += igorDest * vitezaTren;
   }
   else if (directieTren == -1 && directieIgor == -1 && igorPos > trenPos)
   {
      trainTime += trenPos * vitezaTren;
      trainTime += Sursa * vitezaTren;
      trainTime += abs(Sursa - igorDest) * vitezaTren;
   }
   else
   {
      trainTime += abs(trenPos - igorDest) * vitezaTren;
   }

   cout << min(trainTime, igorTime);

   return 0;
}