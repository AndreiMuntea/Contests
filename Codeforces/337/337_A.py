# https://codeforces.com/contest/337/problem/A
# https://codeforces.com/contest/337/submission/13961119

n,m=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
mins=1000
for i in range(0,len(l)-n+1):
    if l[i+n-1]-l[i]<mins:
        mins=l[i+n-1]-l[i]
print(mins)
