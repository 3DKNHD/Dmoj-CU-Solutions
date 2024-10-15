#define Hd

def min(a:int, b:int) -> int:
    return a if b>a else b

def abs(n:int) -> int:
    return n if n>=0 else -n
N,P = map(int,input().split())
e1,e2,e3=map(int,input().split())

d1 = sorted([abs(N-e1+P),abs(N-e2+P),abs(N-e3+P)])
d2 = sorted([abs(N-P+e1),abs(N-P+e2),abs(N-P+e3)])
d3 = sorted([abs(P-e1),abs(P-e2),abs(P-e3)])

dmin : int = d1[0]
dmin = min(dmin, min(d2[0],d3[0]))
print(dmin)