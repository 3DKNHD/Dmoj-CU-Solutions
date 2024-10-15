#include<iostream>
#include<vector>
#define Hd main(void)
using namespace std;
Hd
{
    vector<unsigned long long> a(0);
    long long aux=0;
    for(long long i=0;i<=75000;i++){
        aux+=i;
        a.push_back(aux);
    }
    long long cp;
    cin>>cp;
    for(long long i=1;i<=cp;i++){
        long long ax=a[i-1],bx=a[cp]-a[i];
        if(ax==bx){
        cout<<i<<endl;break;
        }
    }
}