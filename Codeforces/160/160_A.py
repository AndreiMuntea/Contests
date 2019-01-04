# https://codeforces.com/contest/160/problem/A
# https://codeforces.com/contest/160/submission/13419910

n=int(input())
v=list(map(int,input().split()))
v.sort()
sum=0
for i in range(n):
    sum+=v[i]
ok="true"
i=n-1
sumax=v[i]
while (ok=="true"):
    if sumax>sum-sumax:
        ok="false"
    else:
        i-=1
        sumax+=v[i]
print(n-i)
