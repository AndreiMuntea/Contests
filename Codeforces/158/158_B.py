# https://codeforces.com/contest/158/problem/B
# https://codeforces.com/contest/158/submission/13419053

n=int(input())
x=list(map(int,input().split()))
v=[0,0,0,0,0]
for i in range(n):
    v[x[i]]+=1
nr=v[4]
while (v[1]>0 and v[3]>0):
    nr+=1
    v[3]-=1
    v[1]-=1
while (v[3]>0):
    nr+=1
    v[3]-=1
while(v[1]>=2):
    v[2]+=1
    v[1]-=2
while (v[2]>=2):
    nr+=1
    v[2]-=2
if (v[2]>0 or v[1]>0):
    nr+=1
print(nr)
