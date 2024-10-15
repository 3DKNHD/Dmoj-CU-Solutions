#define Hd

n = int(input())
cont : int = 0

for i in range(n,0,-1):
    for j in range(1,i+1):
        for k in range(1,j+1):
            if k*j*i==n: cont+=1
print(cont)