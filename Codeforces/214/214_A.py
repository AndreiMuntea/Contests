# https://codeforces.com/contest/214/problem/A
# https://codeforces.com/contest/214/submission/14926990

n,m = map(int,input().split())
nr = 0
for i in range(1001):
    for j in range(1001):
        if i*i + j == n and i + j*j == m:
            nr += 1
print(nr)
