# https://codeforces.com/contest/546/problem/A
# https://codeforces.com/contest/546/submission/13588873

n,m,k=map(int,input().split())
if ((((n+(n*k))*k)//2)-m > 0):
    print((((n+(n*k))*k)//2)-m)
else:
    print(0)


