# https://codeforces.com/contest/540/problem/A
# https://codeforces.com/contest/540/submission/14011088

n=int(input())
s=input()
s2=input()
rez=0;
for i in range(n):
    t1=int(s[i])
    t2=int(s2[i])
    if abs(t1-t2)>min(t1,t2)+10-max(t1,t2):
        rez+=min(t1,t2)+10-max(t1,t2)
    else:
        rez+=abs(t1-t2)
print(rez)
