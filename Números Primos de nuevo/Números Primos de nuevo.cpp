#include<iostream>
#include<climits>
using namespace std;
#define Hd main(void)
bool esPrimo(long long aux,long long i){
    if(aux==i)return true;
    if(aux%i==0)return false;
    return esPrimo(aux,i+1);
}

Hd
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m;
    cin>>n;
    while(n--){
        cin>>m;
        for(int i=m;i>=2;i--){
            if(esPrimo(i,2)){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=m;i<INT_MAX;i++){
            if(esPrimo(i,2)){
                cout<<i<<endl;
                break;
            }
        }
    }
}