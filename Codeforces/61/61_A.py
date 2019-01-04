# https://codeforces.com/contest/61/problem/A
# https://codeforces.com/contest/61/submission/13614120

a=input()
b=input()
c=[]
for i in range(len(a)):
    if a[i]==b[i]:
        c.append(0)
    else:
        c.append(1)
for i in range (len(a)):
    print(c[i],sep='', end='')
