# https://codeforces.com/contest/158/problem/A
# https://codeforces.com/contest/158/submission/13406190

n,k = map(int, input().split())
x=list(map(int,input().split()))
nr=0
meta_number=x[k-1]
for i in range(n):
    if ((i<k and x[i]>0) or (i>=k and x[i]>0 and meta_number==x[i])):
        nr+=1
print(nr)
