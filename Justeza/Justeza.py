#define Hd
def Solve(a:int,b:int,c:int,k:int) -> int:
    return (b-a if k&1 else a-b)
a,b,c,k = map(int,input().split())
print(Solve(a,b,c,k))
