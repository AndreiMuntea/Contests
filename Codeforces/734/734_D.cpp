// https://codeforces.com/contest/734/problem/D
// https://codeforces.com/contest/734/submission/22308457

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct _PIECE
{
   unsigned long long dist;
   char c;
}PIECE;

inline bool diagonala(long long x, long long y, long long xr, long long yr)
{
   return (abs(x - xr) == abs(y - yr));
}

inline unsigned long long distance(long long x, long long y, long long xr, long long yr)
{
   return (unsigned long long)((x - xr)*(x - xr) + (y - yr)*(y - yr));
}

int main()
{
   long long xr, yr, n, x, y;
   char c;
   PIECE v[10];
   PIECE aux;
   unsigned long long dist;

   for (int i = 0; i < 10; ++i) v[i].c = '0', v[i].dist = -1;
   scanf("%lld %lld %lld", &n, &xr, &yr);
   
   while (n--)
   {
      getchar();
      scanf("%c %lld %lld",&c, &x, &y);
      dist = distance(x, y, xr, yr);
      aux.c = c;
      aux.dist = dist;
      
      if (x == xr && y > yr && dist < v[1].dist) v[1] = aux;
      else if (x == xr && y < yr && dist < v[2].dist) v[2] = aux;
      else if (x > xr && y == yr && dist < v[3].dist) v[3] = aux;
      else if (x < xr && y == yr && dist < v[4].dist) v[4] = aux;
      else if (diagonala(x, y, xr, yr))
      {
         if (x < xr && y > yr && dist < v[5].dist) v[5] = aux;
         else if (x > xr && y > yr && dist < v[6].dist) v[6] = aux;
         else if (x < xr && y < yr && dist < v[7].dist) v[7] = aux;
         else if (x > xr && y < yr && dist < v[8].dist) v[8] = aux;
      }
   }

   bool won = (v[1].c != 'Q' && v[1].c != 'R' &&
      v[2].c != 'Q' && v[2].c != 'R' &&
      v[3].c != 'Q' && v[3].c != 'R' &&
      v[4].c != 'Q' && v[4].c != 'R' &&
      v[5].c != 'Q' && v[5].c != 'B' &&
      v[6].c != 'Q' && v[6].c != 'B' &&
      v[7].c != 'Q' && v[7].c != 'B' &&
      v[8].c != 'Q' && v[8].c != 'B');
   (won) ? puts("NO") : puts("YES");


   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct my{
    char tip;
    unsigned long long distanta;
    my(){
        tip = '0';
        distanta = -1;
    }

};

inline bool diagonale(long long xP,long long yP,long long x,long long y){
    return abs(xP - x) == abs(yP - y);
}

unsigned long long distanta(long long xP,long long yP,long long x,long long y){
    return (unsigned long long)((xP - x)*(xP-x) + (yP - y)*(yP - y));
}

int main()
{
    my v[8];
    long long i,n;
    long long xR,yR;
    scanf("%lld %lld %lld",&n,&xR,&yR);
    char pion;
    long long xPion,yPion;
    unsigned long long myDist;
    for(i=0;i<n;i++){
        getchar();
        scanf("%c %lld %lld",&pion,&xPion,&yPion);
        myDist = distanta(xPion,yPion,xR,yR);
        if(diagonale(xPion,yPion,xR,yR)){

            if(xPion < xR && yPion > yR && v[1].distanta > myDist){
                v[1].distanta = myDist;
                v[1].tip = pion;
            }
            else if(xPion > xR && yPion > yR && v[2].distanta > myDist){
                v[2].distanta = myDist;
                v[2].tip = pion;
            }
            else if(xPion < xR && yPion < yR && v[4].distanta > myDist){
                v[4].distanta = myDist;
                v[4].tip = pion;
            }
            else if(xPion > xR && yPion < yR &&v[5].distanta > myDist){
                v[5].distanta = myDist;
                v[5].tip = pion;
            }
        }
        else if(yPion == yR){
            if(xPion < xR && v[7].distanta > myDist){
                v[7].distanta = myDist;
                v[7].tip = pion;
            }
            else if(xPion > xR && v[6].distanta > myDist){
                v[6].distanta = myDist;
                v[6].tip = pion;
            }
        }
        else if(xPion == xR){
            if(yPion > yR && v[0].distanta > myDist){
                v[0].distanta = myDist;
                v[0].tip = pion;
            }
            else if( yPion < yR &&v[3].distanta > myDist){
                v[3].distanta = myDist;
                v[3].tip = pion;
            }
        }
    }
    bool ESah = (v[0].tip == 'R' || v[0].tip == 'Q' ||
                 v[3].tip == 'R' || v[3].tip == 'Q' ||
                 v[6].tip == 'R' || v[6].tip == 'Q' ||
                 v[7].tip == 'R' || v[7].tip == 'Q' ||
                 v[1].tip == 'B' || v[1].tip == 'Q' ||
                 v[2].tip == 'B' || v[2].tip == 'Q' ||
                 v[4].tip == 'B' || v[4].tip == 'Q' ||
                 v[5].tip == 'B' || v[5].tip == 'Q'
                 );
    (ESah) ? puts("YES") : puts("NO");
    return 0;
}