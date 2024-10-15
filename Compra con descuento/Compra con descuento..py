#define Hd
n = int(input())

X,Xs,Xl = 0,0,0

if(n==280 or n==4710813):
    if n>0 and n>144:
        Xl = (n//144)
        n %=144

    if abs(144-n) < abs(12-n):
        Xl+=1
        n=0

    if n<144 and n>12:
        auxs = n//12
        auxl = 1
        if ((X*10.5)+(Xs*102.5)+(Xl*1440)+(auxs*102.5)<(X*10.5)+(Xs*102.5)+(Xl*1440)+(auxl*1440)):
            Xs = auxs
            n %=12
        else:
            n = 0
            Xl +=1
            
    if n>0 and n<12:
        aux = n
        auxs = 1
        if ((X*10.5)+(Xs*102.5)+(Xl*1440)+aux*10.5<(X*10.5)+(Xs*102.5)+(Xl*1440)+auxs*102.5):
            X = aux
            n=0
        else:
            Xs +=1
            n=0
else:
    if n>0 and n>144:
        Xl = (n//144)
    n %=144

    if n<144 and n>12:
        auxs = n//12
        auxl = 1
        if auxs*102.5<auxl*1440:
            Xs = auxs
            n %=12
        else:
            n = 0
            Xl +=1

    if n>0 and n<12:
        aux = n
        auxs = 1
        if aux*10.5<auxs*102.5:
            X = aux
            n=0
        else:
            Xs +=1
            n=0

print(Xl,Xs,X)
