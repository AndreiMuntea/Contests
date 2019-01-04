# https://codeforces.com/contest/514/problem/A
# https://codeforces.com/contest/514/submission/14419432

s = input()
j = 0
if s[0]=='9':
    print(9,sep='',end='')
    j = 1
for i in range(j,len(s)):
    print(min(9-int(s[i]),int(s[i])),sep='',end='')
