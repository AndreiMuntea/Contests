# https://codeforces.com/contest/461/problem/A
# https://codeforces.com/contest/461/submission/14447388

n = int(input())
m = sorted(list(map(int,input().split())))
s = sum(m)
if n!=1:
    for i in range(n-1):
        s += m[i]*(i+1)
    s+=m[n-1]*(n-1)
print(s)
