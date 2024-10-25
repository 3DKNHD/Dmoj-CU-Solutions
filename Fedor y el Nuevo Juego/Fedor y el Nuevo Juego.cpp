#include <bits/stdc++.h>
using namespace std;
#define Hd main(void)
Hd
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, k, fedor;
    cin >> n >> m >> k;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    cin >> fedor;
    int dbits = 0, posamigos = 0;
    bitset<32> fedbin(fedor);
    for (int i = 0; i < m; i++)
    {
        bitset<32> aux(a[i]);
        dbits = (fedbin ^ aux).count();
        if (dbits <= k)
            posamigos++;
    }
    cout << posamigos;
}