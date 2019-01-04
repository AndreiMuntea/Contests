# https://codeforces.com/contest/41/problem/A
# https://codeforces.com/contest/41/submission/13583435

def is_correct(s,t):
    if len(s) != len(t):
        return 'NO'
    for i in range(len(s)):
        if s[i] != t[len(t)-1-i]:
            return 'NO'
    return 'YES'
s=input()
t=input()
print(is_correct(s,t))
