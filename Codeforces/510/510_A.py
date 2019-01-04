# https://codeforces.com/contest/510/problem/A
# https://codeforces.com/contest/510/submission/14007946

n,m=map(int,input().split())
ok=1
for i in range(1,n+1):
    for j in range(1,m+1):
        if (i%2==1):
            print('#',sep='',end='')
        elif j==m and ok==-1:
            print('#',sep='',end='')
        elif j==1 and ok==1:
            print('#',sep='',end='')
        else:
            print('.',sep='',end='')
    print()
    if i%2==1:
        ok=-ok
