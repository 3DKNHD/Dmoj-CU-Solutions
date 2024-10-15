#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
#define INF INT_MAX
int t;
void FW(vector<vector<pair<int,int>>> &graph){
    int V = graph.size();
    vector<vector<int>> dist(V,vector<int>(V,INF));
    vector<vector<int>> Mt(V,vector<int>(V,INF));

    for(int i=0;i<V;i++){
        dist[i][i]=0;
        for(auto ed:graph[i]){
            int v = ed.first;
            int w = ed.second;
            dist[i][v] = w;
            Mt[i][v] = w;
        }
    }
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]!=INF && dist[k][j] != INF){
                    if(dist[i][j]==INF){
                    dist[i][j] = dist[i][k]+dist[k][j];
                    Mt[i][j] = max(Mt[i][k],Mt[k][j]);}
                    else{
                        int aux = max(Mt[i][k],Mt[k][j]);
                        if(aux<Mt[i][j]){
                            dist[i][j] = dist[i][k]+dist[k][j];
                            Mt[i][j] = aux;
                        }
                    }
                }
            }
        }
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if(dist[a][b]==INF)cout<<"-1\n";
        else cout<<Mt[a][b]<<"\n";
    }
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m>>t;
    vector<vector<pair<int,int>>> graph(n);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        graph[a].push_back({b,c});
    }
    FW(graph);
}