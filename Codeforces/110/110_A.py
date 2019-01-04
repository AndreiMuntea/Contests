# https://codeforces.com/contest/110/problem/A
# https://codeforces.com/contest/110/submission/13477477

def is_lucky(a):
    
    """
     Check if a given number (a) is lucky.
     @input: an integer a (1<=a<=10^18)
     @output: True - if a is lucky
              False - if a is not lucky
    """
    if a==0:
        ok=False
    else:
        ok=True
       # We assume that a is lucky
    
    while (a>0 and ok==True):
        if (int(a%10) == 4 or int(a%10) == 7):
            a=a//10
        else:
            ok=False
    return ok
def nearly_lucky(n):

    """
     Check if a given number (n) is nearly lucky.
     @input: an integer n (1<=n<=10^18)
     @output: True - if n is nearly lucky
              False - if n is not nearly lucky
    """

    ok=False
    nr=0
    while n>0:
        if is_lucky(n%10)==True:
            nr+=1
        n=n//10
    if is_lucky(nr)==True:
        ok=True
    return(ok)

def citire():

    """
     Read an integer.
     @output: an integer n (1<=n<=10^18)
    """

    return int(input())

n=citire() #read n
if (nearly_lucky(n)==True):
    print("YES")
else:
    print("NO")
