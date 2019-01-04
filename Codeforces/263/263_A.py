# https://codeforces.com/contest/263/problem/A
# https://codeforces.com/contest/263/submission/13580409

for i in range(5):
    x=list(map(int, input().split()))
    for j in range(5):
        if x[j]==1:
            ax,ay=i+1,j+1
    x.clear()
print(abs(3-ax)+abs(3-ay))
