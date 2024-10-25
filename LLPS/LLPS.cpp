#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
Hd{
    cin.tie();ios_base::sync_with_stdio(0);
    string a;
    cin>>a;
    sort(a.begin(),a.end(),greater<char>());
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(a[i]!=a[i+1])break;
    }
}