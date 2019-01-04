# https://codeforces.com/contest/472/problem/A
# https://codeforces.com/contest/472/submission/13580206

n = int(input())
from math import sqrt
def e_prim(k):

    if k==1:
        return False
    for d in range(2,int(sqrt(n))+1):
        if k%d==0:
            return False
    return True
if n % 2 == 0:
    print(n-4, 4)
else:
    k=4
    while e_prim(n-k) == True:
        k=k+2
    print(k, n-k)
    
    
