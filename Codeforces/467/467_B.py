# https://codeforces.com/contest/467/problem/B
# https://codeforces.com/contest/467/submission/14468665

n,m,k = map(int,input().split())
l = []
while (m+1>0):
    x = int(input())
    l.append(x)
    m-=1
nr = 0
for i in range (len(l)-1):
    c = l[i]^l[len(l)-1]
    if bin(c).count("1")<=k:
            nr+=1
print(nr)
