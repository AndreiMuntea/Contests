# https://codeforces.com/contest/1/problem/A
# https://codeforces.com/contest/1/submission/13419183

n,m,a=map(int,input().split())
nr1=int(n/a)
if (int(n%a)>0):
    nr1+=1
nr2=int(m/a)
if (int(m%a)>0):
    nr2+=1
print(nr1*nr2)
