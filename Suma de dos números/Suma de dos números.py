#define Hd
s = input()
b = ''.join(sorted(s))
a = b[::-1]
aux = 0
for c in b:
    if c == '0':
        aux+=1
    else:
        break

b =  b[aux] + b[0:aux] + b[aux+1:]
print(int(a)+int(b))