# https://codeforces.com/contest/486/problem/A
# https://codeforces.com/contest/486/submission/13960500

n=int(input())

if n%2==0:
    print(int(n/2))
else:
    print(int(-1-(n/2)))
    
