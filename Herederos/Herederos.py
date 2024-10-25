def CalcSangre(Sangre, Relaciones, Hijo):

    if Hijo not in Relaciones:
        Sangre[Hijo] = -1
        return

    a = Relaciones[Hijo][0]
    if a not in Sangre:
        if a in Relaciones:
            CalcSangre(Sangre, Relaciones, a)
        else:
            Sangre[a] = -1

    if len(Relaciones[Hijo]) > 1:
        b = Relaciones[Hijo][1]
        if b not in Sangre:
            if b in Relaciones:
                CalcSangre(Sangre, Relaciones, b)
            else:
                Sangre[b] = -1

    if Sangre.get(a, -1) == -1 and Sangre.get(b, -1) == -1:
        Sangre[Hijo] = -1
    else:
        Sangre[Hijo] = (Sangre.get(a, -1)+Sangre.get(b, -1)) / 2
        
        
n,k=map(int,input().split())
rey = input()
Sangre={}
Relaciones={}
Sangre[rey]=(1<<50)
while n>0:
    Hijo,Padre,Madre=input().split()
    Relaciones[Hijo]=[Padre,Madre]
    n-=1
rey=input()
#print(Relaciones[Relaciones[rey][1]][1])
CalcSangre(Sangre,Relaciones,rey)
k-=1
while k>0:
    aux=input()
    CalcSangre(Sangre,Relaciones,aux)
    if Sangre[aux]>Sangre[rey]:
        rey = aux
    k-=1  
print(rey)