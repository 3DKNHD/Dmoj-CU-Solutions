#include <bits/stdc++.h>
using namespace std;
#define Hd main(void)
Hd{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    auto bs = std::bitset<500>();
    while(m--){
        int operation,x,a,z=0;
        cin>>operation>>x>>a;
        x-=1;
        if(operation==1){
            for(;x<a;x++){
                z+=bs[x];
            }
            cout<<z<<endl;
        }
        else{
            for(;x<a;x++){
                bs.flip(x);
            }
        }
    }
}