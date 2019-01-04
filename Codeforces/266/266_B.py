# https://codeforces.com/contest/266/problem/B
# https://codeforces.com/contest/266/submission/14007696

import copy
n,k=map(int,input().split())
s=input()
while (k>0):
    p=[];
    i=0;
    while i<=n-1:
        if i<=n-2 and s[i]=='B' and s[i+1] =='G':
            p.append('G')
            p.append('B')
            i+=2
        else:
            p.append(s[i])
            i+=1
    del(s)
    s=copy.deepcopy(p)
    del(p)
    k-=1
for el in s:
    print(el,end='',sep='')
            
