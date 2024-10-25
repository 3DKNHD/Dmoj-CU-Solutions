#include <bits/stdc++.h>
#define Hd main(void)
using namespace std;

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    vector<long long> v1,v2;
    for(int i=0;i<n;i++){
        long long aux;
        cin>>aux;
        v1.push_back(aux);
    }
    for(int i=0;i<n;i++){
        long long aux;
        cin>>aux;
        v2.push_back(aux);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(v1[i]>v2[i]){
            cout<<"NE\n";
            return 0;
        }
    }
    cout<<"DA\n";
}