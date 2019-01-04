# https://codeforces.com/contest/231/problem/A
# https://codeforces.com/contest/231/submission/13406348

n=int(input())
nr=0
for i in range(n):
    a,b,c=map(int, input().split())
    nraux=0
    if a==1:
        nraux+=1
    if b==1:
        nraux+=1
    if c==1:
        nraux+=1
    if nraux>=2:
        nr+=1
print(nr)
