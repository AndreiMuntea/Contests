# https://codeforces.com/contest/200/problem/B
# https://codeforces.com/contest/200/submission/14572603

n = int(input())
s = sum(list(map(int,input().split())))
print("%.12f" %float(s/n))
