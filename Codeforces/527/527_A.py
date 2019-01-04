# https://codeforces.com/contest/527/problem/A
# https://codeforces.com/contest/527/submission/14458555

a,b = map(int,input().split())
s = 0
while a%b!=0:
    s+= a//b
    a,b = max(a%b,b),min(a%b,b)
s+=a//b
print(s)
