# https://codeforces.com/contest/118/problem/A
# https://codeforces.com/contest/118/submission/13405524

s=input()
i=0
s2=""
vowellist=['a','e','i','o','u','y']
while (i<len(s)):
    if s[i].lower() not in vowellist:
       s2=s2+"."+s[i]
    i+=1
print(s2.lower())

    
