# https://codeforces.com/contest/271/problem/A
# https://codeforces.com/contest/271/submission/13478547

def read():

    """
     Read an integer n.
     @restrictions: 1000<=n<=9000
     @output: n - the year number
    """

    return(int(input()))
def distinct_digits(n):

    """
     Check if a number (n) has only distincts digits.
     @input: n - an integer
     @output: True - if n has only distincts digits
              False - otherwise
    """

    v=[] # A list of digits frequency

    #initialize list with 0
    for i in range(10):
        v.append(0)

    ok=True # we assume that n has only distincts digits

    while (n>0 and ok==True):
        v[n%10]+=1
        if v[n%10]>1:
            ok=False
        else:
            n=n//10
    return ok

def find(n):

    """
     Find the smallest value that is strictly larger than n and all it's digits are distincts
     @input: n - a given integer
     @output: the value that we search for
     @restrictions: it is guaranteed that the answer exists
    """

    n+=1
    while distinct_digits(n)!=True:
        n+=1
    return n
    
    
n=read()
print(find(n))
