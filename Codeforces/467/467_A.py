# https://codeforces.com/contest/467/problem/A
# https://codeforces.com/contest/467/submission/13477314

def read():

    """
     Read 2 values p and q, 0<=p<=q<=100.
     @output: p - the number of people who already live in room
              q - room's capacity
    """

    p,q=map(int,input().split())
    return p,q

def room_spec(n):

    """
     Return the number of rooms where George and Alex can move in.
     @input: n - the total number of rooms
     @output: the number of rooms where George and Alex can move in.
    """

    nr=0
    for i in range(n):
        p,q=read()
        if q-p>=2:
            nr+=1
    return nr

n=int(input()) # read an integer n (1<=n<=100) - the number of rooms
print(room_spec(n))
