#define Hd
def hnum(n, primes):
    humble = [1]
    pointers = [0] * len(primes)
    while len(humble) < n:
        candidates = [humble[pointers[i]] * primes[i] for i in range(len(primes))]
        next_h = min(candidates)
        humble.append(next_h)
        for i in range(len(primes)):
            if humble[pointers[i]] * primes[i] == next_h:
                pointers[i] += 1
    return humble[-1]


k,n = map(int,input().split())
S = []
entrada=input().split()
for valor in entrada:
    S.append(int(valor))
print(hnum(n+1, S))