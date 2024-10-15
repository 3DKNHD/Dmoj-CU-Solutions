#include<iostream>
#include<vector>
using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a, b;
    vector<long long> v;
    cin >> a >> b;
    while (true) {
        v.push_back(b);
        if (b == a) {
            cout << "YES" << endl;
            cout << v.size() << endl;
            for (long long i = v.size() - 1; i >= 0; i--) {
                cout << v[i] << " ";
            }
            return 0;
        } else if (b < a || (b % 2 != 0 && b % 10 != 1)) {
            break;
        } else if (b % 2 == 0) {
            b /= 2;
        } else if (b % 10 == 1) {
            b /= 10;
        }
    }

    cout << "NO" << endl;
}