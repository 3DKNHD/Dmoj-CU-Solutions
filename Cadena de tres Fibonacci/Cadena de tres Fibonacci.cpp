#include<iostream>
#include <vector>
using namespace std;
#define Hd main(void)

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<string> a={"1","1"};
    int f1=1,f2=1,aux=0;
    string n="";
    for(int i=0;n.size()<=8;i++){
        aux=f1+f2;
        n=to_string(aux);
        a.push_back(n);
        f1=f2;
        f2=aux;
    }
    cin>>n;
    for(int i=0;i<a.size()-3;i++){
        string x=a[i]+a[i+1]+a[i+2];
        if(x.size()>n.size()){
            cout<<"Error";
            return 0;
        }
        if(x==n&&i+5<a.size()){
            cout<<a[i+3]<<a[i+4]<<a[i+5];
            return 0;
        }
    }
    cout<<"Error";
}