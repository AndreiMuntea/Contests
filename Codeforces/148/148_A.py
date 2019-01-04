# https://codeforces.com/contest/148/problem/A
# https://codeforces.com/contest/148/submission/13473365

a=[]
for i in range(4):
    x=int(input())
    a.append(x)
n=int(input())
v=[]
for i in range(n+1):
    v.append(0)
for i in range(4):
    aux=a[i]
    while a[i]<n+1:
        v[a[i]]=1
        a[i]+=aux
nr=0
for i in range(1,n+1):
    if v[i]==1:
        nr+=1
print(nr)
