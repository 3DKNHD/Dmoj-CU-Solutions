#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)


typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int MAX = 100001;
const int MAXINT = 1000000000;

int n;
vvii G(MAX);
vi D(0);
vi Dijkstra(int s){

    set<ii> Q;
    D[s] = 0;
    Q.insert(ii(0,s));
    while(!Q.empty()){
        ii top= *Q.begin();
        Q.erase(Q.begin());
        int v = top.second;
        int d = top.first;
        vii::const_iterator it;
        for(it = G[v].begin(); it != G[v].end(); it++){
            int v2 = it->first;
            int cost = it->second;
            if(D[v2]> D[v]+cost){
                if(D[v2]!=MAXINT){
                    Q.erase(Q.find(ii(D[v2],v2)));
                }
                D[v2] = D[v] +cost;
                Q.insert(ii(D[v2],v2));
            }
        }
    }
    return D;
}

Hd{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m,ini,v1,v2;
    scanf("%d%d%d%d%d",&m,&n,&ini,&v1,&v2);
    for(int i=0;i<m;i++){
        int a,b,p;
        scanf("%d%d%d",&a,&b,&p);
        G[a].push_back(ii(b,p));
        G[b].push_back(ii(a,p));
    }
    D = vi(MAX,MAXINT);
    vi IN = Dijkstra(ini);
    D = vi(MAX,MAXINT);
    vi V1 = Dijkstra(v1);
    D = vi(MAX,MAXINT);
    vi V2 = Dijkstra(v2);
    printf("%d",((IN[v1]+V1[v2])>(IN[v2]+V2[v1])? (IN[v2]+V2[v1]):(IN[v1]+V1[v2])));
}