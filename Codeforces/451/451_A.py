# https://codeforces.com/contest/451/problem/A
# https://codeforces.com/contest/451/submission/13960967

n,m=map(int,input().split())
if (n==1) or (m==1):
    rez=1;
else:
    if (n>m):
        diff=m
    else:
        diff=n
    if diff%2==0:
        rez=0
    else:
        rez=1
if rez==0:
    print("Malvika")
else:
    print("Akshat")
