# https://codeforces.com/contest/519/problem/B
# https://codeforces.com/contest/519/submission/14419382

n = int(input())
l = list(map(int,input().split()))
dicts = {}
for el in l:
    if el in dicts.keys():
        dicts[el]+=1
    else:
        dicts[el]=1
p = list(map(int,input().split()))
dictssec={}
for el in p:
    if dicts[el]>1:
        dicts[el]-=1
    else:
        del(dicts[el])
    if el in dictssec.keys():
        dictssec[el]+=1
    else:
        dictssec[el]=1
l = list(map(int,input().split()))
h = list(dicts.keys())
print(h[0])
for el in l:
    if dictssec[el]>1:
        dictssec[el]-=1
    else:
        del(dictssec[el])
h = list(dictssec.keys())
print(h[0])
    
