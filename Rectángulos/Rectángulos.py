#define Hd 
cp,aux=int(input()),1
i: int =0
while aux*aux<=cp:
    a = cp//aux
    if a*aux == cp:
        i+=1
    aux+=1
print(i)