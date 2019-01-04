# https://codeforces.com/contest/339/problem/A
# https://codeforces.com/contest/339/submission/13408149

s=input()
v=[0, 0, 0, 0]
for i in range(len(s)):
    if s[i]=="1":
        v[1]+=1
    elif s[i]=="2":
        v[2]+=1
    elif s[i]=="3":
        v[3]+=1
nr=0
i=0
for i in range(4):
    while v[i]>0:
        print(i,end='')
        nr+=1
        if nr<len(s):
            print("+",end='')
            nr+=1
        v[i]-=1
