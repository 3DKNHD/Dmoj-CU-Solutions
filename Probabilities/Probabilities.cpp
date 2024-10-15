#include <stdio.h>
#define Hd main(void)
long long modInverse(long long a, long long m) {
    long long m0 = m;
    long long y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        long long q = a / m;
        long long t = m;
        m = a % m;
        a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}

long long calcularExpresion(long long n) {
    long long suma = 0;
    for (long long i = 1; i <= n; i++) {
        long long inversoCuadratico = modInverse(i * i, 1234567891);
        suma = (suma + inversoCuadratico) % 1234567891;
    }
    long long resultado = (modInverse(n, 1234567891) * suma) % 1234567891;
    return resultado;
}

long long extendedGcd(long long a, long long b, long long x, long long y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    long long x1, y1;
    long long gcd = extendedGcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}


Hd
{
    long long n;
    scanf("%lld",&n);
    long long resultado = calcularExpresion(n);
    printf("%lld",resultado);
}
