# https://codeforces.com/contest/588/problem/A
# https://codeforces.com/contest/588/submission/14543201

n = int(input())
a, kilo =map(int,input().split())
s = kilo*a
while n-1>0:
    a,b = map(int,input().split())
    if b<kilo:
        kilo = b
    s += kilo*a
    n -= 1
print(s)
