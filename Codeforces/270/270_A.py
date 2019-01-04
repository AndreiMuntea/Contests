# https://codeforces.com/contest/270/problem/A
# https://codeforces.com/contest/270/submission/14468305

n = int(input())
while n>0:
    x = int(input())
    if 360 %  (180-x) ==0:
        print('YES')
    else:
        print('NO')
    n-=1
    
