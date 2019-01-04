# https://codeforces.com/contest/567/problem/A
# https://codeforces.com/contest/567/submission/14261083

def diferenta(x,y):
    if  x>=0 and y>=0:
        return y-x
    elif x<=0 and y<=0:
        return abs(x)-abs(y)
    else:
        return abs(x)+y

n = int(input())
l = list(map(int,input().split()))
print(diferenta(l[0],l[1]), diferenta(l[0],l[len(l)-1]))
for i in range (1,len(l)-1):
    print(min(diferenta(l[i-1],l[i]),diferenta(l[i],l[i+1])),max(diferenta(l[i],l[len(l)-1]),diferenta(l[0],l[i])))
print(diferenta(l[len(l)-2],l[len(l)-1]), diferenta(l[0],l[len(l)-1]))
