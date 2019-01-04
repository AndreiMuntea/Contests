# https://codeforces.com/contest/208/problem/A
# https://codeforces.com/contest/208/submission/13960065

import string
s=input()
a=s.replace('WUB',' ')
del(s)
s=a.lstrip()
del(a)
a=s.rstrip()
print(a)
