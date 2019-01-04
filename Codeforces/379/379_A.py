# https://codeforces.com/contest/379/problem/A
# https://codeforces.com/contest/379/submission/13583372

n,m = map(int,input().split())
nr = n
while n // m > 0:
    notlighted = n % m
    nr += n//m
    n = n//m + notlighted
print(nr)
