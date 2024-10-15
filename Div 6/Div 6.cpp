#include <iostream>
#define Hd main(void)
using namespace std;

bool isDiv(string aux){
    int z = (aux[aux.size()-1]) - '0';
    if(z % 2 != 0)return false;
    long long x=0;
    for(int i=0;i<aux.size();i++){
       z=aux[i] - '0';
       x+=z;
    }
    return x%3==0;}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cp;
    cin>>cp;
    while(cp--){
    string a;
    cin>>a;
    cout<<(isDiv(a)? "YES":"NO")<<"\n";
    }
    
}