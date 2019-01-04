# https://codeforces.com/contest/237/problem/A
# https://codeforces.com/contest/237/submission/14397970

n = int(input())
m,h = map(int,input().split())
nr=1;
nr1=1;
while n-1>0:
    x,y=map(int,input().split())
    if x==m and y==h:
        nr1+=1
    else:
        m,h,nr1 = x,y,1
    if nr1>nr:
        nr=nr1
    n-=1
print(nr)
