# https://codeforces.com/contest/149/problem/A
# https://codeforces.com/contest/149/submission/14449996

k  = int(input())
l = sorted(list(map(int,input().split())))
i = 11
nr = 0
while k>0 and i>=0:
    k-=l[i]
    nr+=1
    i-=1
if k>0:
    print(-1)
else:
    print(nr)

