#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#define Hd main()
using namespace std;

Hd{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> dig(4);
    cin>>dig[0]>>dig[1]>>dig[2]>>dig[3];
    sort(dig.begin(),dig.end());
    int minDif = INT_MAX;
    do {
        int a = dig[0]*10 + dig[1];
        int b = dig[2]*10 + dig[3];
        int difference = abs(a-b);
        minDif = min(minDif, difference);
    } while (next_permutation(dig.begin(), dig.end()));
    cout<< minDif<<"\n";
}
