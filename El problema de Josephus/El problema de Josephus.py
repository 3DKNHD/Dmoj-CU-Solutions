#define Hd

def answr(n:int) -> int:
    if n<2: return 1
    return ((2*answr(n/2)+1) if n&1 else 2*answr(n/2)-1)

t : int
t = int(input())
while t:
    t-=1
    n = int(input())
    print(answr(n))