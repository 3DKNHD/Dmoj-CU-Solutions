#define Hd
def Rey(r1, c1, r2, c2):
    return max(abs(r1 - r2), abs(c1 - c2))
    
def Torre(r1, c1, r2, c2):
    if r1 == r2 or c1 == c2:
        return 1
    else:
        return 2
        
def Alfil(r1, c1, r2, c2):
    def puede(r1, c1, r2, c2):
        return (r1 + c1) %2 == abs(r2 - c2) %2
    if not puede(r1,c1,r2,c2):
        return 0
    elif abs(r1 - r2) == abs(c1 - c2):
        return 1
    else:
        return 2 
        
r1,c1,r2,c2=map(int,input().split())
print(Torre(r1,c1,r2,c2),Alfil(r1,c1,r2,c2),Rey(r1,c1,r2,c2))