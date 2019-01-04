// https://codeforces.com/contest/519/problem/A
// https://codeforces.com/contest/519/submission/14057025

#include <iostream>

using namespace std;

int white['Z'+1],black['z'+1];

void init()
{
    white['Q']=9; black['q']=9;
    white['R']=5; black['r']=5;
    white['B']=3; black['b']=3;
    white['N']=3; black['n']=3;
    white['P']=1; black['p']=1;
    white['K']=0; black['k']=0;
}

int main()
{
  char c;
  int black_points=0, white_points=0;
  init();
  for (int i=0;i<8;i++)
  {
      for (int j=0;j<8;j++)
      {
          cin>>c;
          if (c!='.' && c<'Z')
          {
              white_points+=white[c];
          }
          else if (c!='.')
          {
              black_points+=black[c];
          }
      }
  }
  if (white_points>black_points)
  {
      cout<<"White";
  }
  else if (white_points<black_points)
  {
      cout<<"Black";
  }
  else
  {
      cout<<"Draw";
  }

  return 0;

}
