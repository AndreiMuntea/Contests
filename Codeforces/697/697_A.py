# https://codeforces.com/contest/697/problem/A
# https://codeforces.com/contest/697/submission/25661932

t,s,x = map(int,input().split())
if (x % s == t % s and t <= x or x % s == (t + 1) % s and t+1 < x):
    print('YES')
else:
    print('NO')
