# https://codeforces.com/contest/583/problem/A
# https://codeforces.com/contest/583/submission/14410627

n = int(input())
v = [0]*(n+1)
h = [0]*(n+1)
i = 1
while (i<=n*n):
    a,b=map(int,input().split())
    if v[a]==0 and h[b]==0:
        v[a]=h[b]=1
        print(i,sep=' ',end=' ')
    i+=1
