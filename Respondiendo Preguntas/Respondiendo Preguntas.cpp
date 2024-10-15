#include <iostream>
#include <vector>
using namespace std;

#define Hd int main()

long long N;
vector<long long> Three(0);

void init(int node=1, int l=0, int r=N) {
    if(l == r) Three[node] = 0;
    else{
        int mi = (l + r) / 2;
        init(2*node, l, mi);
        init(2*node+1, mi+1, r);
        Three[node] = (Three[2*node] + Three[2*node+1]);
    }
}

void update(int x, int val, int node=1, int l=0, int r=N) {
    if(r < x || l > x) return;
    if(l == r) Three[node] += val;
    else{
        int mi = (l + r) / 2;
        update(x, val, 2*node, l, mi);
        update(x, val, 2*node+1, mi+1, r);
        Three[node] = (Three[2*node] + Three[2*node+1]);
    }
}

long long query(int x, int y, int node=1, int l=0, int r=N) {
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

    long long cp, aux, u, v;
    bool done = false;
    cin >> N >> cp >> aux;
    N++;
    Three.resize(3*(N+(N/2)),0);
    cp += aux;

    while(cp--){
        cin >> aux >> u >> v;
        if(aux == 1){
            done = true;
            update(u-1, v);
            update(u, 2*v);
            update(u+1, v);
        } else{
            if(!done) printf("0\n");
            else printf("%lld\n",(query(u, v)) % 10000);
        }
    }
}