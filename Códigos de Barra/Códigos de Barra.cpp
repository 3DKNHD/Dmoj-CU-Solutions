#include <iostream>
#include <string>
#include <unordered_map>
#define Hd main(void)
using namespace std;

Hd {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    string a;
    cin >> a;

    unordered_map<int, int> ma;
    ma[0] = 1;

    int con = 0, diff = 0;
    for (int i = 0; i < n; i++) {
        diff += (a[i] == '0' ? -1 : 1);

        if (ma.find(diff) != ma.end()) {
            con += ma[diff];
        }
        ma[diff]++;
    }
    cout << con;

}