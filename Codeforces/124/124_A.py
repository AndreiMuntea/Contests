# https://codeforces.com/contest/124/problem/A
# https://codeforces.com/contest/124/submission/14872673

n, a, b = map(int,input().split())
print(n-max(a+1,n-b)+1)
