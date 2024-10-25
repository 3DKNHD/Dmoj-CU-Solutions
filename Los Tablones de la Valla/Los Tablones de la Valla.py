#define Hd 
def minh(n, k, alturas):
    actsum = sum(alturas[:k])
    minsum = actsum
    minind = 0

    for i in range(1, n - k + 1):
        actsum = actsum - alturas[i - 1] + alturas[i + k - 1]
        if actsum < minsum:
            minsum = actsum
            minind = i

    return minind

n, k = map(int, input().split())
alturas = list(map(int, input().split()))

minind = minh(n, k, alturas)

print(minind + 1)