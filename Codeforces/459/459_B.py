# https://codeforces.com/contest/459/problem/B
# https://codeforces.com/contest/459/submission/14543529

n = int(input())
l = sorted(list(map(int,input().split())))
nr = 0
nr2 = 0
i = 0
if l[0]==l[n-1]:
    nr = (n)*(n-1)//2
    n = n-1
else:
    while i<n-1 and l[0] == l[i]:
        i,nr = i+1, nr+1
    n -= 1
    i = n
    while i>1 and l[n] == l[i]:
        i, nr2 = i-1, nr2+1
    nr = nr*nr2
    if len(l)==2:
        nr+=1
print(l[n]-l[0],nr)
