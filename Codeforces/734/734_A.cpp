// https://codeforces.com/contest/734/problem/A
// https://codeforces.com/contest/734/submission/22307512

#include <iostream>
#include <string>
using namespace std;



int main()
{
   int An,Dn, size;
   string s;
   cin >> An >> s;
   An = Dn = 0; size = s.size();
   for (int i = 0; i < size; ++i)
   {
      (s[i] == 'A') ? An++ : Dn++;
   }
   (An > Dn) ? puts("Anton") : (An == Dn) ? puts("Friendship") : puts("Danik");
   
   return 0;
}