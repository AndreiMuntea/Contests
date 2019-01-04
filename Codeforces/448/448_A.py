# https://codeforces.com/contest/448/problem/A
# https://codeforces.com/contest/448/submission/14009316

a,b,c=map(int,input().split())
r=int((a+b+c)/5)
if (a+b+c)%5!=0:
    r+=1
a,b,c=map(int,input().split())
r2=int((a+b+c)/10)
if (a+b+c)%10!=0:
    r2+=1
r+=r2
n=int(input())
if r>n:
    print('NO')
else:
    print('YES')
