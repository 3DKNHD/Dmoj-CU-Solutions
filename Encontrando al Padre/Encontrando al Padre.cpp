#include <bits/stdc++.h>
using namespace std;

#define Hd main(void)

long long conv(string a,int x){
    if(x==a.size()-1) return a[x]-'0';
    int aux= a[x]-'0';
    return aux*pow(10,a.size()-(x+1)) + conv(a,x+1);
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long cp;
    while(cin>>cp){
    bitset<64> n(cp);
    long long m=0;
    string a=n.to_string();
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='1'&&a[i-1]=='0'){
            a[i-1]='1';
            for(int j=a.size()-1;j>=i;j--){
                a[j]=(m>0 ? '1':'0');
                m--;
            }
            break;
        }
        else if(a[i]=='1')m++;
    }
    bitset<64> d(a);
    cout<<d.to_ullong()<<"\n";
    }
}