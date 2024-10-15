#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

unordered_map<int,vector<int>> Graph;
vector<bool> vis(0);
void dfs(int s,vector<int> ruta,int end){
    vis[s] = true;
    for(auto n:Graph[s]){
        if(n==end){
            cout<<ruta.size()+1<<"\n";
            for(auto i:ruta){
                cout<<i<<"\n";
            }
            cout<<n;
            return;
        }
        else if(!vis[n]){
            ruta.push_back(n);
            dfs(n,ruta,end);
            ruta.pop_back();
        }
    }
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,t;
    cin>>n>>m>>t;
    vis = vector<bool> (n+1,false);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        Graph[a].push_back(b);
        Graph[a].push_back(c);
    }
    vector<int> ruta={1};
    dfs(1,ruta,t);
}