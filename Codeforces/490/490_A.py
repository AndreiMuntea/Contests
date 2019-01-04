# https://codeforces.com/contest/490/problem/A
# https://codeforces.com/contest/490/submission/14398111

n = int(input())
l = list(map(int,input().split()))
d = {1:[],2:[],3:[]}
for i in range (n):
    d[l[i]].append(i+1)
t = min(len(d[1]),len(d[2]),len(d[3]))
print(t)
while t>0:
    print(d[1].pop(),d[2].pop(),d[3].pop())
    t-=1
