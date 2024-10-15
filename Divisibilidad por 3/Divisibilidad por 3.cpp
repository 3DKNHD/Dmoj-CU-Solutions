#include <bits/stdc++.h>
#define Hd main(void)
using namespace std;

vector<long long> a(0);
string b,c,d;
long long conv(string a,int x) {
    if(x==a.size()-1) return a[x]-'0';
    int aux= a[x]-'0';
    return aux*pow(10,a.size()-(x+1)) + conv(a,x+1);
}
int crearpos(string z) {
    if(z.size()>8)return 1;
    string aux=z+b;
    a.push_back(conv(aux,0));
    aux=z+c;
    a.push_back(conv(aux,0));
    aux=z+d;
    a.push_back(conv(aux,0));
    return crearpos(z+b) + crearpos(z+c) + crearpos(z+d);
}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>b>>c>>d;
    crearpos("");
    sort(a.begin(),a.end());
    for(int i=0; i<a.size(); i++) {
        if(a[i]%3==0) {
            cout<<a[i]<<endl;
            return 0;
        }
    }
}
