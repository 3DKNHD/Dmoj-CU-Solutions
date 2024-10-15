#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
#define i long long 
#define ii pair<i,i>

i N,D;
ii T[50000*4+5],ar[50000];

void init(i node=1,i l=0,i r=N-1){
    if(l==r)T[node]=ar[l];
    else{
        i mid = (l+r)/2;
        init(2*node,l,mid);
        init(2*node+1,mid+1,r);
        if(T[2*node].second>T[2*node+1].second){
            T[node] = T[2*node];
        }
        else{
            T[node] = T[2*node+1];
        }
    }
}

i query(i xa,i x,i y,i node =1,i l =0,i r=N-1){
    if(r<x||l>y)return -1;
    if(x<=l && r<=y){
        return T[node].second;
    }
    else{
        i mid = (l+r)/2;
        return max(query(xa,x,y,2*node,l,mid),query(xa,x,y,2*node+1,mid+1,r));
    }
}

i bsi(i j) {
    i l = 0;
    i r = j;
    while (l < r) {
        i mid = (l + r) / 2;
        if (ar[j].first - ar[mid].first > D) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return l;
}

i bsr(i j) {
    i l = j;
    i r = N - 1;
    while (l < r) {
        i mid = (l + r + 1) / 2;
        if (ar[mid].first - ar[j].first > D) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return r;
}

Hd{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>N>>D;
    for(i j=0;j<N;j++){
        cin>>ar[j].first>>ar[j].second;
    }
    sort(ar,ar+N);
    i c=0;
    init();
    for(i j=0;j<N;j++){
        i izquierda = bsi(j);
        while (izquierda > 0 && ar[j].first - ar[izquierda - 1].first <= D) {
            izquierda--;
        }
        i derecha = bsr(j);
        while (derecha < N - 1 && ar[derecha + 1].first - ar[j].first <= D) {
            derecha++;
        }
        i aux1=query(ar[j].first,izquierda,j,1,0,N-1);
        i aux2=query(ar[j].first,j+1,derecha,1,0,N-1);
        //cout<<j<<": ar["<<j<<"]: "<<ar[j].second<<" ml: "<<aux1<<" mr: "<<aux2<<"\n";
        if(aux1>=2*ar[j].second&&aux2>=ar[j].second*2)c++;
    }
    cout<<c;
}