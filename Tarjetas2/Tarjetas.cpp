#include<iostream>
#include<vector>
#define Hd main(void)
using namespace std;

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,m;
    cin>>n>>m;
    vector<long long> tva(n,0);
    vector<long long> auxp(n,0);
    while(m--){
        long long vc,h,min;
        string a;
        cin>>vc>>a>>h>>min;
        if(a=="START"){
            auxp[vc-1]=h*60+min;
        }
        else {
            tva[vc-1]+=(h*60+min)-auxp[vc-1];
        }
    }
    for(long long i=0;i<n;i++){
        long long h=long(tva[i]/60);
        long long min = tva[i]%60;
        cout<<h<<" "<<min<<endl;
    }
    return 0;
}