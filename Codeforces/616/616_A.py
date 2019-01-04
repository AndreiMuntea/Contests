# https://codeforces.com/contest/616/problem/A
# https://codeforces.com/contest/616/submission/15329901

a = input().lstrip("0")
b = input().lstrip("0")
if len(a) > len (b) or len(a) == len(b) and a > b:
    print('>')
elif len(a) < len(b) or len(a) == len(b) and a < b:
    print('<')
elif a == b:
    print('=')
