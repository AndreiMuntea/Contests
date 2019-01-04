# https://codeforces.com/contest/116/problem/A
# https://codeforces.com/contest/116/submission/13407618

n=int(input())
nr_max=0
nr_curent=0
for i in range(n):
    pas_out,pas_in=map(int, input().split())
    nr_curent=nr_curent-pas_out+pas_in
    if nr_curent>nr_max:
        nr_max=nr_curent
print(nr_max)
    
