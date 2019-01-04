# https://codeforces.com/contest/572/problem/A
# https://codeforces.com/contest/572/submission/14898609

a, b = map(int,input().split())
k, m = map(int,input().split())
l1 = list(map(int,input().split()))
l2 = list(map(int,input().split()))
if l1[k - 1] < l2[b - m]:
    print('YES')
else:
    print('NO')
