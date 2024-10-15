#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

bool endsWith(string &full,string end) {
    if (full.length() >= end.length()) {
        return (0 == full.compare(full.length() - end.length(), end.length(), end));
    } else {
        return false;
    }
}

Hd
{
    int n;
    string a,b;
    cin>>a>>b;
    cin>>n;
    char aux;
    string s="";
    for(int i=0;i<n;i++){
        cin>>aux;
        if(aux==a[0]||aux==b[0]){
            s+=aux;
        }
        else{
            s="";
        }
    }
        //cout<<s<<endl;
        string fib[n+1];
        fib[0] = b;
        fib[1] = a;
        int k=INT_MAX;
        /*for(int i=2;i<n;i++){
            fib[i] = fib[i-1]+fib[i-2];
            //cout<<fib[i]<<endl;
            if(endsWith(s,fib[i])){
                if(k==INT_MAX)k=i+1;
                else{
                    if(k<i+1)k=i+1;
                }
            }
        }*/
        fib[0] = a;
        fib[1] = b;
        for(int i=2;i<n;i++){
            fib[i] = fib[i-1]+fib[i-2];
            //cout<<fib[i]<<endl;
            if(fib[i].size()>=n||fib[i].size()>s.size())break;
            if(mismatch(fib[i].rbegin(), fib[i].rend(), s.rbegin()).first == fib[i].rend()){
                //cout<<fib[i];
                if(k==INT_MAX)k=i+1;
                else{
                    if(k<i+1)k=i+1;
                }
            }
        }
        fib[0] = b;
        fib[1] = a;
        for(int i=2;i<n;i++){
            fib[i] = fib[i-1]+fib[i-2];
            //cout<<fib[i]<<endl;
            if(fib[i].size()>=n||fib[i].size()>s.size())break;
            if(mismatch(fib[i].rbegin(), fib[i].rend(), s.rbegin()).first == fib[i].rend()){
                //cout<<fib[i];
                if(k==INT_MAX)k=i+1;
                else{
                    if(k<i+1)k=i+1;
                }
            }
        }
        cout<<(k==INT_MAX? 2:k);

}