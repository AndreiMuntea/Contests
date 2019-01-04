# https://codeforces.com/contest/439/problem/A
# https://codeforces.com/contest/439/submission/14449216

n, d = map(int,input().split())
l = list(map(int,input().split()))
s = sum(l)
if s+(n-1)*10 > d:
    print(-1)
else:
    d = d-s
    print(d//5)
