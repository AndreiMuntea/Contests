# https://codeforces.com/contest/131/problem/A
# https://codeforces.com/contest/131/submission/13407839

s=input()
if s.isupper():
    print(s.lower())
elif len(s)==1 and s.islower():
    print(s.upper())
elif s[1:len(s)].isupper():
    print(s.capitalize())
else:
    print(s)

    
