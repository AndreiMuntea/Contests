# https://codeforces.com/contest/479/problem/A
# https://codeforces.com/contest/479/submission/13613997

a = int(input())
b = int(input())
c = int(input())


if a==1:
    b=b+1
if b==1:
    if a<c:
        a=a+1
    else:
        c=c+1
if c==1:
    b=b+1
print(a*b*c)
