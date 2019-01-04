# https://codeforces.com/contest/592/problem/C
# https://codeforces.com/contest/592/submission/47395386

def gcd(a,b):
    if b == 0:
        return a
    return gcd(b,a%b)

def reduct(x,y):
    g = gcd(x,y)
    while g != 1:
        while x % g == 0 and y % g == 0:
            x = x // g
            y = y // g
        g =gcd(x,y)
    print(str(x) + "/" + str(y))

(t, w, b) = map(int,input().split())
rest = min(w,b) - 1
s = (w*b) // gcd(w,b)
div = t // s
mod = t % s
ans = div + div * rest + min(mod,rest)
reduct(ans,t)