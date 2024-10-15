#include<iostream>
#include<vector>
#include<unordered_map>
#define Hd main(void)
using namespace std;
unordered_map<int,vector<int>> graph;
int els;
void dfs(int nodo,int vis[]) {
    if(!vis[nodo]) {
        vis[nodo]=1;
    }
    for(auto a:graph[nodo]) {
        if(!vis[a]) { //cout<<a<<" ";
            els--;
            dfs(a,vis);
        }
    }
}
Hd { 
    int n;
    scanf("%d",&n);
    for(int i=1; i<n; i++) {
        int a,b;
        scanf("%d%d",&a,&b);
        graph[b].push_back(a);
    }
    for(int i=1; i<=n; i++) {
        els=n-1;
        int vis[n+1]= {0};
        dfs(i,vis); //cout<<endl; //cout<<els<<endl;
        if(els==0) {
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
}