# https://codeforces.com/contest/599/problem/A
# https://codeforces.com/contest/599/submission/14384482

d1,d2,d3 = map(int, input().split())
l = min(d1,d2)
total = l
h = max(d1,d2)
p = min(l+h,d3)
total += p
p = min(h,d3+l)
total += p
print(total)
