#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

void dfs(int u, int time, vector<int> &parent, vector<int> &low,vector<bool> &visited,vector<int> &disc,vector<vector<int>> G,int &bridges){
    visited[u]=true;
    disc[u]=time;
    low[u] = time;
    for(auto &v:G[u]){
        if(!visited[v]){
            parent[v] = u;
            dfs(v,time+1,parent,low,visited,disc,G,bridges);
            low[u] = min(low[u],low[v]);
            if(low[v]> disc[u]){
                bridges+=1;
            }
        }
        else if( v != parent[u]){
            low[u]=min(low[u],disc[v]);
        }
    }

}
int count_bridges(vector<vector<int>> G,int N){
    vector<bool> visited(N,false);
    vector<int> parent(N,-1);
    vector<int> low(N,INT_MAX);
    vector<int> disc(N,INT_MAX);
    int bridges = 0;
    for(int i=0;i<N;i++){
        if(!visited[i]){
            dfs(i,0,parent,low,visited,disc,G,bridges);
        }
    }
    return bridges;
}

Hd{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N,M;
    scanf("%d%d",&N,&M);
    vector<vector<int>> G(N);
    for(int i=0,u,v;i<M;i++){
        scanf("%d%d",&u,&v);
        G[u-1].push_back(v-1);
        G[v-1].push_back(u-1);
    }
    int ans = count_bridges(G,N);
    printf("%d",ans);
}