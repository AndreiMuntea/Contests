# https://codeforces.com/contest/476/problem/A
# https://codeforces.com/contest/476/submission/14268179

n,m = map(int,input().split())
if n%2==0:
    high = n//2
else:
    high = n//2 + 1
if high%m==0:
    div = high//m
else:
    div = high//m +1
if m*div<=n:
    print(m*div)
else:
    print(-1)
