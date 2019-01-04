# https://codeforces.com/contest/4/problem/C
# https://codeforces.com/contest/4/submission/15134542

n = int(input())
dictio = {}
while n > 0:
    s = input()
    try:
        dictio[s] += 1
        print(s,dictio[s],sep='')
    except:
        dictio[s] = 0
        print('OK')
    n -= 1
