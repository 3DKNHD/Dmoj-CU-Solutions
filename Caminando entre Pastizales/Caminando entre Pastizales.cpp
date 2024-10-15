#include <bits/stdc++.h>
#define Hd main(void)
using namespace std;

const int MAX = 30001;
const int INF = 1e9;

unordered_map <int, vector<int>> adj;

int bfs(int start,int end,vector<vector<int>>& graph){
    queue<int> q;
    unordered_map<int,bool> visited;
    unordered_map<int,int> distance;
    q.push(start);
    visited[start] = true;
    distance[start] = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(node == end){
            return distance[node];
        }
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
                distance[neighbor] = distance[node]+graph[neighbor][node];
            }
        }
    }
    return 0;
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,m;
    scanf("%lld%lld",&n,&m);
    vector<vector<int>> graph(n,vector<int>(n,INF));
    for(int i=1;i<n;i++){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
        graph[a-1][b-1] = graph[b-1][a-1] = c;
    }
    while(m--){
        long long u,v;
        scanf("%lld%lld",&u,&v);
        u--;v--;
        printf("%lld\n",bfs(u,v,graph));
    }
}