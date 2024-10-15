#include<stdio.h>
#include<vector>
using namespace std;

#define Hd main(void)

vector<vector<int>> Graph(0);
vector<bool> vis(0);
int sz,N,M;

void dfs(int start){
    vis[start]=1;
    sz++;
    for(auto nodo: Graph[start]){
        if(vis[nodo]){
            continue;
        }
        dfs(nodo);
    }
}

Hd{
    scanf("%d%d",&N,&M);
    Graph = vector<vector<int>>((N*M)+1);
    char posis[N][M];
    int aux[N][M];
    int v=1;
    vis = vector<bool>(N*M+1,false);
    for(int i=0;i<N;i++){
        scanf("%s",posis[i]);
        for(int j=0;j<M;j++){
            aux[i][j] = v;
            v++;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(posis[i][j]=='1'){
                if(i<N-1 && posis[i+1][j]=='1'){
                    Graph[aux[i][j]].push_back(aux[i+1][j]);
                }
                if(i>0 && posis[i-1][j]=='1'){
                    Graph[aux[i][j]].push_back(aux[i-1][j]);
                }
                if(j<M-1 && posis[i][j+1]=='1'){
                    Graph[aux[i][j]].push_back(aux[i][j+1]);
                }
                if(j>0 && posis[i][j-1]=='1'){
                    Graph[aux[i][j]].push_back(aux[i][j-1]);
                }
            }
        }
    }
    int c = 0,ga=0;
    for(int i = 0;i<N;i++){
        for(int j=0;j<M;j++){
            if(!vis[aux[i][j]] && posis[i][j] == '1'){
                sz = 0;
                dfs(aux[i][j]);
                c++;
                if(sz>ga)ga = sz;
            }
        }
    }
    printf("%d %d",c,ga);
}