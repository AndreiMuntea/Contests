# https://codeforces.com/contest/59/problem/A
# https://codeforces.com/contest/59/submission/14287298

import string
lower = string.ascii_lowercase
upper = string.ascii_uppercase
s = input()
nrl,nru = 0, 0
for i in range (len(s)):
    if s[i] in lower:
        nrl+=1
    else:
        nru+=1
if nrl>=nru:
    print(s.lower())
else:
    print(s.upper())
