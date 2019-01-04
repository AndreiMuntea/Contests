# https://codeforces.com/contest/441/problem/A
# https://codeforces.com/contest/441/submission/14872818

n, v = map(int,input().split())
vanz = []
i = 1
while (i<=n):
    l = list(map(int,input().split()))
    if v > min(l[1:]):
        vanz.append(i)
    i += 1
print(len(vanz))
for el in vanz:
    print(el, end = ' ' )
