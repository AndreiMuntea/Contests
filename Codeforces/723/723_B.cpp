// https://codeforces.com/contest/723/problem/B
// https://codeforces.com/contest/723/submission/21321513

#include <stdio.h>
#include <stdlib.h>


int main()
{

   int n;
   char str[255];

   scanf("%d", &n);
   scanf("%s", &str);

   int out = 1;
   int i = -1;
   int wordLen = 0, wordIn = 0, maxLenOut = 0;
   while (++i < n)
   {
      if (str[i] == '(')
      {
         if (wordLen > maxLenOut)
         {
            maxLenOut = wordLen;
         }
         out = 0;
         wordLen = 0;
     }
      else if (str[i] == ')')
      {
         if (wordLen > 0)
         {
            wordIn++;
         }
         out = 1;
         wordLen = 0;
      }
      else if (str[i] == '_')
      {
         if (out == 1)
         {
            if (wordLen > maxLenOut)
            {
               maxLenOut = wordLen;
            }
         }
         else if (wordLen > 0)
         {
            wordIn++;
         }
         wordLen = 0;
      }
      else
      {
         wordLen++;
      }
   }

   if (wordLen > maxLenOut)
   {
      maxLenOut = wordLen;
   }

   printf("%d %d", maxLenOut, wordIn);

   return 0;
}