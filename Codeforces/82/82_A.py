# https://codeforces.com/contest/82/problem/A
# https://codeforces.com/contest/82/submission/13476587

n=int(input())
nr=5
i=1
k=1
while nr<n:
    k=k*2 + 1
    nr=5*k
    i=i*2
cont=1
while nr-i+1>n:
    nr=nr-i
    cont+=1
    
    
if cont==1:
    strn='Howard'
elif cont==2:
    strn='Rajesh'
elif cont==3:
    strn='Penny'
elif cont==4:
    strn='Leonard'
else:
    strn='Sheldon'
print(strn)

    
