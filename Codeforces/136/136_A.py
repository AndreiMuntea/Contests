# https://codeforces.com/contest/136/problem/A
# https://codeforces.com/contest/136/submission/13580602

def find(k,l):
    for i in range(len(l)):
        if l[i]==k:
            return i+1

n = int(input())
l = list(map(int,input().split()))
for i in range(n):
    print(find(i+1,l),end=' ')
    
