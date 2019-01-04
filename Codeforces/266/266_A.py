# https://codeforces.com/contest/266/problem/A
# https://codeforces.com/contest/266/submission/13408006

n=int(input())
s=input()
nr=0
for i in range(1,len(s)):
    if s[i]==s[i-1]:
        nr+=1
print(nr)
