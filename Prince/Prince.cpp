#include<bits/stdc++.h>
using namespace std;
#define Hd main()
#define MAXN 1010
int N,CAPACIDAD;

int peso[MAXN], valor[MAXN];
int dp[MAXN][MAXN];
int mochila(int i, int libre){
    if(libre < 0)return -1000000000;
    if(i==0)return 0;
    if(dp[i][libre]!=-1)return dp[i][libre];
    int op1=mochila(i-1,libre);
    int op2=valor[i]+mochila(i-1,libre-peso[i]);
    return (dp[i][libre]=max(op1,op2));
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long cp,solve=0;
    cin>>cp;
    while(cp--){
        cin>>N>>CAPACIDAD;
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<=N;i++){
            cin>>peso[i]>>valor[i];
        }
        int solucion=mochila(N,CAPACIDAD);
        solve+=solucion;
    }
    cout<<solve<<"\n";
}