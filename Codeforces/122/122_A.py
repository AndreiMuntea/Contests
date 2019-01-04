# https://codeforces.com/contest/122/problem/A
# https://codeforces.com/contest/122/submission/13477054

def is_lucky(a):
    
    """
     Check if a given number (a) is lucky.
     @input: an integer a (1<=a<=1000)
     @output: True - if a is lucky
              False - if a is not lucky
    """

    ok=True       # We assume that a is lucky
    
    while (a>0 and ok==True):
        if (int(a%10) == 4 or int(a%10) == 7):
            a=a//10
        else:
            ok=False
    return ok

def almost_lucky(n):

    """
     Check if a given number (n) is almost lucky.
     @input: an integer n (1<=n<=1000)
     @output: True - if n is almost lucky
              False - if n is not almost lucky
    """

    # n is "almost lucky" if n is lucky
    
    if (is_lucky(n)==True): 
        ok=True
    else:
        ok=False

    #If n is not lucky, we check to to see if it is "almost lucky"

    d=2
    while (d<=n//2 and ok==False):
        if (int(n%d)==0 and is_lucky(d)==True):
            ok=True
        else:
            d+=1

    return ok

def citire():

    """
     Read an integer.
     @output: an integer n (1<=n<=1000)
    """

    return int(input())

n=citire() #read n
if (almost_lucky(n)==True):
    print("YES")
else:
    print("NO")

    
    
    
