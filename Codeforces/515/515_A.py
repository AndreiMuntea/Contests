# https://codeforces.com/contest/515/problem/A
# https://codeforces.com/contest/515/submission/14397592

n,m,s=map(int,input().split())
s = s - (abs(n)+abs(m))
if s<0:
    s=1
if s%2==0:
    print('Yes')
else:
    print('No')
