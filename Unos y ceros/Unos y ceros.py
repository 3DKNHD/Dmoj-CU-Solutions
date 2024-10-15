#define Hd
import math

def to_bin(n):
    return bin(n)[2:]

def fim(cp):
    for _ in range(cp):
        n=int(input())
        j=1;
        found=False
        while not found:
            bj=int(to_bin(j))
            if bj%n==0:
                found=True
                print(bj)
            j+=1    
cp=int(input())
fim(cp)