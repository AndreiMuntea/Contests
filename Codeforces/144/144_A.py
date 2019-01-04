# https://codeforces.com/contest/144/problem/A
# https://codeforces.com/contest/144/submission/13589412

n=int(input())
l=list(map(int,input().split()))
maxs=-1
mins=102
poz_min, poz_max = -1, -1
for i in range(len(l)):
    if maxs<l[i]:
        maxs=l[i]
        poz_max=i+1
    if mins>=l[i]:
        mins=l[i]
        poz_min=i+1
if poz_max>poz_min:
    poz_max-=1
print(poz_max-1+len(l)-poz_min)
