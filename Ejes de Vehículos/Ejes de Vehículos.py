#define Hd
def mcd(a:int, b:int) -> int:
    return b if a%b==0 else mcd(b,a%b)

a:int
b:int
c:int
c = int(input())
c-=1
a = int(input())
while c:
    c-=1
    b = int(input())
    a = a*b // mcd(a,b)

print(a)