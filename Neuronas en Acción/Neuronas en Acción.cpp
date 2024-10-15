#include<iostream>
using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n;
    while(cin>>n){
    if(n==1)cout<<"(1(1))";
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"("<<i<<"(";
            long long count=0;
            while(n%i==0){
               n/=i;count++;
            }
            cout<<count<<"))";
        }
    }
    cout<<endl;}
}