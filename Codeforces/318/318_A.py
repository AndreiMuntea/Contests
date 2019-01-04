# https://codeforces.com/contest/318/problem/A
# https://codeforces.com/contest/318/submission/14008127

n,m=map(int,input().split())
if n%2==0:
    k=int(n/2)
else:
    k=int(n/2+1)
if k<m:
    print((m-k)*2)
else:
    print(2*m-1)
    
