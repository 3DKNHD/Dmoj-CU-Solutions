#define Hd
n : int
n = int(input())
a : int 
aux : int = 0
i : int = 1
for _ in map(int,input().split()):
    a=_
    a+=aux
    if a<i or (i==n and a>n):
        print("No")
        exit(0)
    aux = a-i
    i+=1

print("Si")
