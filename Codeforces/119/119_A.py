# https://codeforces.com/contest/119/problem/A
# https://codeforces.com/contest/119/submission/13478295

def read():

    """
     Read three integers: a,b,n.
     @restrictions: 1<=a,b,n<=100
     @output: a - number that Simon receives
              b - number that Antisimon receives
              n - the number of stones in heap at start.
    """
    
    a,b,n=map(int, input().split())
    return a,b,n
def gcd(x,y):

    """
     Calculate the greatest common divisor of x and y using Euclid's algorithm.
     @input: x,y
     @output: greatest common divisor of x and y.
    """

    while y!=0:
        r=y
        y=x%y
        x=r
    return x

def play(a,b,n):

    """
     The steps of playing the game.
     @input: a - number that Simon receives
             b - number that Antisimon receives
             n - the number of stones in heap at start.
     @output: 0 - if Simon wins
              1 - if Antisimon wins
    """

    #tour variable can have 2 values: 1 if it's Simon turns or -1 if it's Antisimon's
    
    tour=1
    while n>0:
        if tour == 1:
            k=a
        else:
            k=b
        n=n-gcd(k,n)
        tour=-tour
    if tour==1:
        return 1
    else:
        return 0

a,b,n=read()
print(play(a,b,n))
