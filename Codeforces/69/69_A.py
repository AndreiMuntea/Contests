# https://codeforces.com/contest/69/problem/A
# https://codeforces.com/contest/69/submission/13613715

def check(l):
    for i in range(len(l)):
        if l[i]!=0:
            return ('NO')
    return('YES')
n = int(input())
l = [0, 0, 0]
for _ in range(n):
    m=list(map(int, input().split()))
    for i in range(3):
        l[i]+=m[i]
    m[:]=[]
print(check(l))
