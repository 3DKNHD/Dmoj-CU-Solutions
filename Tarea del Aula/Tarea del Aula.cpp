#include<iostream>
#define Hd main(void)
using namespace std;

Hd
{
    string a,b,c;
    cin>>a>>c>>b;
    if(c[0]=='*'){
        for(int i=1;i<b.size();i++){
            a+="0";
        }
        cout<<a;
    }
    else{
        int an=a.size(),bn=b.size();
        if(an>=bn){
            for(int i=an-1,j=bn-1;j>=0;i--,j--){
                if(a[i]=='1'){
                    if(b[j]=='1'){
                        a[i]='2';
                    }
                 }
            if(a[i]=='0'){
                    if(b[j]=='1'){
                       a[i]='1';
                     }
                }
            }
            cout<<a;
        }
        else{
       for(int i=bn-1,j=an-1;j>=0;i--,j--){
                if(b[i]=='1'){
                    if(a[j]=='1'){
                        b[i]='2';
                    }
                 }
            if(b[i]=='0'){
                    if(a[j]=='1'){
                       b[i]='1';
                     }
                }
            }
            cout<<b;
        }   
    }
    return 0;
}