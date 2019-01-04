# https://codeforces.com/contest/507/problem/A
# https://codeforces.com/contest/507/submission/14530591

def recursie(s,i):
    if i<n and s+p[i][1]<=k :
            recursie(s+p[i][1],i+1)
            print(p[i][0]+1,sep = ' ', end=' ')
    else:
        print(i)
n, k = map(int,input().split())
l = list(map(int,input().split()))
p = []
for i in range(n):
    p.append([i,l[i]])
p = sorted(p,key=lambda x: x[1])
s = 0
i = 0
recursie(s,i)
