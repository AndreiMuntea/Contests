# https://codeforces.com/contest/118/problem/B
# https://codeforces.com/contest/118/submission/14544078

n = int(input())
k = n
for i in range(1,n+n+2):
    for j in range(1,k+1):
        print(' ',end=' ')
    for j in range(n-k+1):
        if n-k==0:
            print(j,sep=' ',end='')
        else:
            print(j,sep=' ',end=' ')
    for j in range(n-k):
        if j==n-k-1:
            print(n-k-j-1,sep=' ',end='')
        else:
            print(n-k-j-1,sep=' ',end=' ')
    if i<=n:
        k-=1
    else:
        k+=1
    print()
