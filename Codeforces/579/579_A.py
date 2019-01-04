# https://codeforces.com/contest/579/problem/A
# https://codeforces.com/contest/579/submission/14411323

def power(a,b):
    if b==1:
        m = a
    elif b==0:
        m = 1
    elif b%2==0:
        m = power(a*a,b//2)
    else:
        m = a*power(a*a,(b-1)//2)
    return m
def find_bacteria(n):
    ans = power(2,1)
    i = 1
    while ans<n:
        i+=1
        ans = power(2,i)
    if ans>n:
        ans = power(2,i-1)
    return ans
n = int(input())
nr = 0
while n>1:
    p = find_bacteria(n)
    n = n-p
    nr += 1
if n ==1:
    nr += 1
print(nr)
