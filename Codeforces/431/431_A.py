# https://codeforces.com/contest/431/problem/A
# https://codeforces.com/contest/431/submission/14639640

l = [0] +  list(map(int,input().split()))
s = input()
sm = 0
for i in range(len(s)):
    sm += l[int(s[i])]
print(sm)
