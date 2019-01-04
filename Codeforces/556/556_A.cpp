// https://codeforces.com/contest/556/problem/A
// https://codeforces.com/contest/556/submission/14410932

#include <iostream>

using namespace std;

int main()
{
  char c;
  int n,nr0=0,nr1=0;
  cin>>n;
  for (int i=1;i<=n;i++)
  {
      cin>>c;
      if (c=='0')
      {
          nr0++;
      }
      else
      {
          nr1++;
      }
      if (nr1>0 && nr0>0)
      {
            if (nr1>nr0)
            {
                nr1-=nr0;
                nr0=0;
            }
            else
            {
                nr0-=nr1;
                nr1=0;
            }
      }
  }
  cout<<max(nr0,nr1);
}
