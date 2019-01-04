// https://codeforces.com/contest/733/problem/A
// https://codeforces.com/contest/733/submission/22040766

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;


#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define ABS(a)   (((a) > 0)   ? (a) : (-(a)))

bool is_vowel(const char& c)
{
   return(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

int main()
{

   string s;
   int start = -1;
   unsigned int ability = 0;

   cin >> s;
   size_t size = s.size();
   for (size_t i = 0; i < size; ++i)
   {
      if (is_vowel(s[i]))
      {
         ability = MAX(ability, i - start);
         start = i;
      }
   }

   ability = MAX(ability, size - start);

   printf("%d\n", ability);

   return EXIT_SUCCESS;
}