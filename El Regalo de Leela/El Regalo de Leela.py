#define Hd
def abs(a:int) -> int:
    return a if a>=0 else -a

n = int(input())
mp : int = 0
ar = list(map(int,input().split()))
for i in range(1,n):
    if ar[i] > ar[mp]:
        mp = i

aux : int = ar[mp]//2
posa : int = -1
ans : int
for i in range(n):
    if i!=mp:
        if posa==-1:
            ans = ar[i]
            posa = 1
        else:
            a,b = abs(ans-aux),abs(ar[i]-aux)
            if a>b:
                ans = ar[i]
            elif a==b and ans<ar[i]:
                ans = ar[i]

print(ar[mp],ans)