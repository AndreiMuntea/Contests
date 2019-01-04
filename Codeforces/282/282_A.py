# https://codeforces.com/contest/282/problem/A
# https://codeforces.com/contest/282/submission/13407539

n=int(input())
nr=0
for i in range(n):
    s=input()
    if s[1]=="+":
        nr+=1
    else:
        nr-=1
print(nr)
