#include <iostream>
#include <vector>
using namespace std;

#define Hd int main()

long long N;
vector<long long> Three(0);
vector<long long> ar(0);

void init(int node=1, int l=0, int r=N-1) {
    if(l == r) Three[node] = ar[l];
    else{
        int mi = (l + r) / 2;
        init(2*node, l, mi);
        init(2*node+1, mi+1, r);
        Three[node] = (Three[2*node] + Three[2*node+1]);
    }
}

void updateplus(int x, int val, int node=1, int l=0, int r=N-1) {
    if(r < x || l > x) return;
    if(l == r) Three[node] += val;
    else{
        int mi = (l + r) / 2;
        updateplus(x, val, 2*node, l, mi);
        updateplus(x, val, 2*node+1, mi+1, r);
        Three[node] = (Three[2*node] + Three[2*node+1]);
    }
}

void updatecero(int x, int node=1, int l=0, int r=N-1) {
    if(r < x || l > x) return;
    if(l == r){
        cout<<Three[node]<<"\n";
        Three[node] = 0;
    }
    else{
        int mi = (l + r) / 2;
        updatecero(x, 2*node, l, mi);
        updatecero(x,2*node+1, mi+1, r);
        Three[node] = (Three[2*node] + Three[2*node+1]);
    }
}

long long query(int x, int y, int node=1, int l=0, int r=N-1){
    if(r < x || l > y) return 0;
    if(x <= l && r <= y){
        return Three[node];
    } else{
        int mi = (l + r) / 2;
        return (query(x, y, 2*node, l, mi) + query(x, y, 2*node+1, mi+1, r));
    }
}

Hd{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long cp;
    cin>>cp;
    for(int i=1;i<=cp;i++){
        cout<<"Case "<<i<<":\n";
        long long Q,aux,u,v;
        cin >> N >> Q;
        ar.resize(N);
        Three.resize(4*(N+1));
        for(long long i=0;i<N;i++)cin>>ar[i];
        init();
        while(Q--){
            cin >> aux;
            if(aux == 1){
                cin>>u;
                updatecero(u);
            }
            else if(aux==2){
                cin>>u>>v;
                updateplus(u,v);
            }
            else{
                cin>>u>>v;
                long long answr = query(u,v);
                cout<<answr<<"\n";
            }
        }
        ar.resize(0);
        Three.resize(0);
    }
}