# https://codeforces.com/contest/612/problem/A
# https://codeforces.com/contest/612/submission/15041261

def gaseste(a,b,n):
    gasit = False
    k = 0
    while k * a <= n and not gasit:
        p = 0
        while (p * b) + (k*a) <= n and not gasit:
            if (p*b)+(k*a) == n:
                gasit = True
            else:
                p+=1
        if not gasit:
            k+=1
    return (-1,-1) if not gasit else (k,p)
    
    

n,p,q = map(int,input().split())
s = input()
a,b = gaseste(p,q,n)
if (a,b) != (-1,-1):
    i = 0
    print(a+b)
    while a > 0:
        print(s[i:i+p])
        i+=p
        a -=1
    while b>0:
        print(s[i:i+q])
        i+=q
        b-=1
else:
    print(-1)
        
