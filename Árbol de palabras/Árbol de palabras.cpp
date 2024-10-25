#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int n,k;
/*
.⢀⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀.
.⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀.
.     ⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆.
.     ⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆.
.    ⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆.
.  ⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿.
. ⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉.
. ⣾ ⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇.
. ⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇.
.        ⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇.
.          ⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿.
.       ⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇.
.       ⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃.
.        ⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁.
.          ⠉⠛⠻⠿⠿⠿⠿⠛⠉
*/
#define Hd main(void)
int costo(string P1, string P2){
    int cos=0;
    for(int i=0;i<k;i++){
        cos+=abs(P1[i]-P2[i]);
    } 
    return cos;   
}

int findx(int x, int F[]){
    if(F[x]!=x)F[x]=findx(F[x],F);
    return F[x];
}

void joinxy(int x, int y, int F[],int R[]){
    int xr=findx(x,F);
    int yr=findx(y,F);
    if(R[xr]<R[yr]){
        F[xr]=yr;
    }
    else if(R[xr]>R[yr]){
        F[yr]=xr;
    }
    else{
        F[yr]=xr;
        R[xr]++;
    }
}

int kruskal(string P[]){
    vector<pair<int,pair<int,int>>> Aristas(0);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            Aristas.push_back({costo(P[i],P[j]),{i,j}});
        }
    }
    sort(Aristas.begin(),Aristas.end());
    int F[n];
    for(int i=0;i<n;i++)F[i]=i;
    int R[n]={};
    vector<pair<int,pair<int,int>>> arbol(0);
    
    for(auto &aux:Aristas){
        int cost=aux.first,i=aux.second.first,j=aux.second.second;
        if(findx(i,F)!=findx(j,F)){
            joinxy(i,j,F,R);
            arbol.push_back({cost,{i,j}});
        }
    }
    int maxmin=0;
    for(auto &aux:arbol){
        int cost=aux.first,i=aux.second.first,j=aux.second.second;
        maxmin=max(maxmin,cost);
    }
    return maxmin;
}


Hd{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    string P[n];
    for(int i=0;i<n;i++)cin>>P[i];
    int ans=kruskal(P);
    cout<<ans;
}