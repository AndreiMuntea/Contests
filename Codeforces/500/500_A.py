# https://codeforces.com/contest/500/problem/A
# https://codeforces.com/contest/500/submission/14007783

n,m=map(int,input().split())
l=list(map(int,input().split()))
p=[0]+l
rez=1+p[1]
while (rez<m):
    rez=p[rez]+rez
if rez==m:
    print('YES')
else:
    print('NO')
