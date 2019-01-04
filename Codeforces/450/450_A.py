# https://codeforces.com/contest/450/problem/A
# https://codeforces.com/contest/450/submission/15261021

n,m = map(int,input().split())
lis = list(map(int,input().split()))
copii = [x for x in range(1, n+1 )]
while lis != []:
    x = lis.pop(0)
    y = copii.pop(0)
    if (x-m) > 0 :
        lis.append(x-m)
        copii.append(y)
print(y)
    
        
