#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
bool comp(string a,int n,int i) {
    int k=i;
    int j=0;
    string aux = a.substr(j,i);
    j=k;
    k+=i;
    sort(aux.begin(),aux.end());
    while(j+i<=n) {
        string x = a.substr(j,i);
        sort(x.begin(),x.end());
        if(x==aux) {
            j = k;
            k = k+i;
        }
        else {
            return false;
        }
    }
    return true;
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a;
    cin>>a;
    int n = a.size();
    for(int i=1; i<n; i++) {
        if(n%i==0) {
            if(comp(a,n,i)) {
                cout<<a.substr(0,i);
                return 0;
            }
        }
    }
    cout<<"-1";
}