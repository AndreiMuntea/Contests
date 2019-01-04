# https://codeforces.com/contest/492/problem/B
# https://codeforces.com/contest/492/submission/14414432

n,m = map(int,input().split())
v = list(map(float,input().split()))
v = sorted(v)
if v[0]!=0:
    maxs = v[0]
    indice = 2
else:
    maxs = -1
    indice = 1
if v[n-1]!=m:
    if m-v[n-1]>maxs:
        maxs=m-v[n-1]
while indice <= n-1:
    if (v[indice]-v[indice-1])/2>maxs:
        maxs=(v[indice]-v[indice-1])/2
    indice+=1
print("%.10f" %maxs)
    
    

    
