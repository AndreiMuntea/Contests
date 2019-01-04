# https://codeforces.com/contest/459/problem/A
# https://codeforces.com/contest/459/submission/14411162

x1,y1,x2,y2 = map(int,input().split())
if x1 == x2:
    l = abs(y2-y1)
    if x1+l>1000:
        l=-l
    x3 = x4 = x1+l
    print(x3,y1,x4,y2)
elif y1==y2:
    l = abs(x2-x1)
    if y1+l>1000:
        l = -l
    y3 = y4 = y1+l
    print(x1,y3,x2,y4)
else:
    if abs(y2-y1)!=abs(x2-x1):
        print(-1)
    else:
        print(x1,y2,x2,y1)
