#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define Hd main(void)
using namespace std;
vector<long long> a(0);
string b="4",c="7";
long long conv(string a,int x) {
    if(x==a.size()-1) return a[x]-'0';
    int aux= a[x]-'0';
    return aux*pow(10,a.size()-(x+1)) + conv(a,x+1);
}
int crearpos(string z,long long cb,long long cc) {
    if(z.size()>11)return 1;
    string aux=z+b;
    if(cb+1==cc)a.push_back(conv(aux,0));
    aux=z+c;
    if(cc+1==cb)a.push_back(conv(aux,0));
    return crearpos(z+b,cb+1,cc) + crearpos(z+c,cb,cc+1);
}
Hd{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    crearpos("",0,0);
    sort(a.begin(),a.end());
    long long lugar;
    cin>>lugar;
    for(int i=0; i<a.size(); i++) {
        if(a[i]>=lugar) {
            cout<<a[i]<<endl;
            return 0;
        }
    }
}