#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)


Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long num;
    cin>>num;
    long long n = sqrt(num/2);
    for(;n<num;n++){
        long long aux  = (n*(n+1))/2;
        if(aux == num){
            cout<<0;
            return 0;
            }
        else{
            if(aux<num){
                if(num-aux <= n){cout<<n<<" "<<num-aux<<"\n";return 0;}
            }
        }
    }
}