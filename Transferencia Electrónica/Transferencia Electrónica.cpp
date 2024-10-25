#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
int bads[100001] = {};
double vis[100001] = {};

void bfs(int start,vector<vector<pair<int,pair<int,double>>>> G){
    vis[start] = 0.0;
    set<pair<int,double>> q;
    q.insert({start,0.0});
    int u;
    double v;
    while(!q.empty()){
        auto aux = *q.begin();
        u = aux.first;
        v = aux.second;
        q.erase(q.begin());
        for(auto e:G[u]){
            int x = e.first;
            int id = e.second.first;
            double price = e.second.second;
            if(!bads[id]){
                if(vis[x]>v+price){
                    if(vis[x]!=INT_MAX){
                        q.erase(q.find({x,vis[x]}));
                    }
                    vis[x] = v+price;
                    q.insert({x,vis[x]});
                }
            }
        }
    }
}

Hd{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int p,c,v,start,end;
    //V son los nodos p es la cantidad de caminos y c los malos
    cin>>v>>p>>c>>start>>end;
    for(int i=0;i<=v;i++)vis[i]=INT_MAX;
    vector<vector<pair<int,pair<int,double>>>> G(v+1);
    for(int i=0;i<p;i++){
        int id,x,y;
        double D;
        cin>>id>>x>>y>>D;
        G[y].push_back({x,{id,D}});
        G[x].push_back({y,{id,D}});
    }
    for(int i=0;i<c;i++){
        int aux;
        cin>>aux;
        bads[aux]++;
    }
    bfs(start,G);
    printf("%.2f",(round(vis[end]*100)/100));
}