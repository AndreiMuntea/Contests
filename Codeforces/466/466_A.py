# https://codeforces.com/contest/466/problem/A
# https://codeforces.com/contest/466/submission/14009138

n,m,a,b=map(int,input().split())
if m>n:
    m=n
if m%n==0:
    rez=0
else:
    rez=1
var1=a*n
impr=int(n/m)
var2=((impr+rez)*b)
pcs=(n-(impr*m))
var3=(impr*b+(pcs*a))
print(min(var1,var2,var3))
    
