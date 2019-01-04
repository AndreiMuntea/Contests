# https://codeforces.com/contest/344/problem/A
# https://codeforces.com/contest/344/submission/13589209

n = int(input())
nr = 0
prev = '-1'
for _ in range(n):
    x = input()
    if x != prev:
        nr+=1
        prev = x
print(nr)
