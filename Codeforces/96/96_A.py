# https://codeforces.com/contest/96/problem/A
# https://codeforces.com/contest/96/submission/13407917

s=input()
i=0
ok='true'
while i<=len(s)-7 and ok=='true':
    if s[i:i+7]=="0000000" or s[i:i+7]=="1111111":
        ok='false'
    else:
        i+=1
if ok=='false':
    print("YES")
else:
    print("NO")
