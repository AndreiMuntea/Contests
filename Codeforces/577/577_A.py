# https://codeforces.com/contest/577/problem/A
# https://codeforces.com/contest/577/submission/14450756

n,k = map(int,input().split())
contor = 0
for i in range(1,n+1):
    if (k%i==0)and(k//i<=n):
        contor+=1
print(contor)
