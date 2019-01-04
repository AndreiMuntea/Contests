# https://codeforces.com/contest/71/problem/A
# https://codeforces.com/contest/71/submission/13404842

n=input()
n=int(n)
for i in range(n):
    s=input()
    if (len(s)>10):
        print(s[0],len(s)-2,s[len(s)-1], sep='')
    else:
        print(s)
