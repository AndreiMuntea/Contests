# https://codeforces.com/contest/112/problem/A
# https://codeforces.com/contest/112/submission/13407948

s1=input()
s2=input()
if s1.lower()==s2.lower():
    print("0")
elif s1.lower()<s2.lower():
    print("-1")
else:
    print("1")
