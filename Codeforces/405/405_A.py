# https://codeforces.com/contest/405/problem/A
# https://codeforces.com/contest/405/submission/14009514

n=int(input())
l=list(map(int,input().split()))
l.sort()
for el in l:
    print(el,sep=' ',end=' ')
