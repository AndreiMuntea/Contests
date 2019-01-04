# https://codeforces.com/contest/499/problem/B
# https://codeforces.com/contest/499/submission/16472830

n,m = map(int,input().split())
dic = {}
while m > 0 :
    key,value = input().split()
    dic[key] = value;
    m -= 1 
l = list(input().split())
for el in l:
    if len(el) <= len(dic[el]):
        print(el, sep = ' ', end = ' ')
    else:
        print(dic[el], sep = ' ', end = ' ')
