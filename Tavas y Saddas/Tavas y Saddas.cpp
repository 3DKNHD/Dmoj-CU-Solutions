#include <bits/stdc++.h>
using namespace std;
#define Hd main(void)
vector<long long> a(0);
string b="4",c="7";

long long conv(string a,int x){
    if(x==a.size()-1) return a[x]-'0';
    int aux= a[x]-'0';
    return aux*pow(10,a.size()-(x+1)) + conv(a,x+1);
}

int crearpos(string z){
    if(z.size()>11)return 1;
    string aux=z+b;
    a.push_back(conv(aux,0));
    aux=z+c;
    a.push_back(conv(aux,0));
    return crearpos(z+b) + crearpos(z+c);
}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    crearpos("");
    sort(a.begin(),a.end());
    long long lugar;
    cin>>lugar;
    for(int i=0;i<a.size();i++){
        if(a[i]==lugar){
            cout<<i+1<<endl;
            break;
        }
    }
}