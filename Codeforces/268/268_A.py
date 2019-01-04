# https://codeforces.com/contest/268/problem/A
# https://codeforces.com/contest/268/submission/13613840

n = int(input())
a = []
b = []
for _ in range(n):
    x,y=list(map(int,input().split()))
    a.append(x)
    b.append(y)
nr = 0
for i in range(n):
    for j in range(n):
        if b[i]==a[j]:
            nr+=1
print(nr)
