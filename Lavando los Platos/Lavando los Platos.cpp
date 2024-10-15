#include<iostream>
#include<stack>
using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    stack<int> ws;
    stack<int> cn;
    int dishes=1;
    int cp;
    cin>>cp;
    while(cn.size()<cp){
        int aux;
        cin>>aux;
        if(aux==1){
            int dc;
            cin>>dc;
            for(int i=0;i<dc;i++){
                ws.push(dishes);
                dishes++;
            }
        }
        else{
            int dc;
            cin>>dc;
            for(int i=0;i<dc;i++){
                int aux=ws.top();
                ws.pop();  
                cn.push(aux);
            }
        }
    }
    while(cn.size()>0){
        cout<<cn.top()<<endl;
        cn.pop();
    }
}