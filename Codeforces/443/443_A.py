# https://codeforces.com/contest/443/problem/A
# https://codeforces.com/contest/443/submission/13614190

s=input()
l=[]
for i in range(26):
    l.append(0)
for i in range(len(s)):
    if s[i]>='a' and s[i]<='z':
        l[ord(s[i])-97]=1
nr=0
for i in range(26):
    if l[i]==1:
        nr+=1
print(nr)
    
