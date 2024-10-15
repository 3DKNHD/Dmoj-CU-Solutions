#define Hd
a,b,c,d = map(int,input().split())

if (a==b and c==d) or (a==c and d==b) or (a==d and c==b):
    a = min(a,b,c,d)
    b = max(a,b,c,d)
    print("YES\n"+str(a*b))
else:
    print("NO\n"+str((a+d)+(b+c)))