# https://codeforces.com/contest/141/problem/A
# https://codeforces.com/contest/141/submission/14008308

s=input()
l=[]
for _ in range(0,27):
    l.append(0)
for i in range (len(s)):
    l[ord(s[i])-64]+=1
del(s)
s=input()
for i in range (len(s)):
    l[ord(s[i])-64]+=1
del(s)
s=input()
for i in range (len(s)):
    l[ord(s[i])-64]-=1
ok='YES'
for i in range (27):
    if l[i]!=0:
        ok='NO'
print(ok)

