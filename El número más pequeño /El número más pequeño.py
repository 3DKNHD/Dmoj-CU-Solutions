#define Hd

xp : int = 3
while xp:
    xp-=1
    n,m,k = map(int,input().split())
    for i in range(1,2147483648):
        if i!=n and i!=m and i!=k and i!=n+m and i!=n+k and i!=m+k and i!=n+m+k:
            print(i)
            break