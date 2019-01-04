# https://codeforces.com/contest/37/problem/A
# https://codeforces.com/contest/37/submission/14575678

n = int(input())
l = list(map(int,input().split()))
dicts = {}
ma = 0
for i in l:
    if i in dicts.keys():
        dicts[i] += 1
    else:
        dicts[i] = 1
    if dicts[i]>ma:
        ma = dicts[i]
print(ma,len(list(dicts.keys())))
