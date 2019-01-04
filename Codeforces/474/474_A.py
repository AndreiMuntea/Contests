# https://codeforces.com/contest/474/problem/A
# https://codeforces.com/contest/474/submission/14042125

keyboard='qwertyuiopasdfghjkl;zxcvbnm,./'
miss=input()
if miss=='R':
    opt=-1
else:
    opt=1
text=input()
for i in range(len(text)):
    print(keyboard[keyboard.index(text[i])+opt],sep='',end='')

