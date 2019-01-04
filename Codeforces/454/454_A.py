# https://codeforces.com/contest/454/problem/A
# https://codeforces.com/contest/454/submission/14543739

n = int(input())
k = 1
for i in range(1,n+1):
    for j in range(1,(n-k)//2+1):
        print('*',end='')
    for l in range(k):
        print('D',end='')
    for j in range(1,(n-k)//2+1):
        print('*',end='')
    if i<(n//2)+1:
        k+=2
    else:
        k-=2
    print()
        
