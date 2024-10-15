#include<iostream>
#include<string.h>
#define Hd main(void)
using namespace std;

Hd
{
    long long n;
    cin>>n;
    while(n!=0){
        string a,result="";
        cin>>a;
        long long x=a.size()/n;
        long long o=0,i=x;
        while(o<a.size()){
            string aux=a.substr(o,i);
            for(long long j=x-1;j>=0;j--){
                result+=aux[j];
            }
            i+=x;o+=x;
        }
        cout<<result<<endl;
        cin>>n;
    }
    return 0;
}