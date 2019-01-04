# https://codeforces.com/contest/58/problem/A
# https://codeforces.com/contest/58/submission/13420486

s=input()
h=s.find('h')
e=s.find('e',h)
l1=s.find('l',e)
l2=s.find('l',l1+1)
o=s.find('o',l2)
if (h<e and e<l1 and l1<l2 and l2<o):
    print("YES")
else:
    print("NO")
