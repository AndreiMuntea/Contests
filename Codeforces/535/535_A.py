# https://codeforces.com/contest/535/problem/A
# https://codeforces.com/contest/535/submission/14926852

numbers = {0:'zero',1:'one',2:'two',3:'three',4:'four',5:'five',6:'six',7:'seven',\
           8:'eight',9:'nine',10:'ten',11:'eleven',12:'twelve',13:'thirteen',14:'fourteen',\
           15:'fifteen',16:'sixteen',17:'seventeen',18:'eighteen',19:'nineteen',20:'twenty',\
           30:'thirty',40:'forty',50:'fifty',60:'sixty',70:'seventy',80:'eighty',90:'ninety'}
a = int(input())
if a <= 20 or a % 10 == 0:
    print(numbers[a])
else:
    print(numbers[a//10 * 10],'-',numbers[a%10],sep='')
    
