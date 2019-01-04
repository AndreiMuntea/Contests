# https://codeforces.com/contest/469/problem/A
# https://codeforces.com/contest/469/submission/13960730

n=int(input())
l=list(map(int,input().split()))
l1=list(map(int,input().split()))
lc=[]
for _ in range(0,n+1):
    lc.append(0)
for i in range(1,len(l)):
    lc[l[i]]=1
for i in range (1,len(l1)):
    lc[l1[i]]=1
ok = 0
for i in range(1,n+1):
    if lc[i]!=1:
        print('Oh, my keyboard!')
        ok = 1;
        break
if ok == 0:
    print('I become the guy.')
        
