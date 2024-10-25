#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

int N;
vector<long long> Tree(0);
vector<long long> Arr(0);

void init(int node = 1,int start = 0, int end = N-1){
    if(start==end)Tree[node] = Arr[start];
    else{
        int mid = (start+end)/2;
        init(node*2,start,mid);
        init(2*node+1,mid+1,end);
        Tree[node] = Tree[2*node] + Tree[2*node+1];
    }
}

void update(int x,int val,int node = 1,int start = 0, int end = N-1){
    if(end<x || start > x) return;
    if(start == end) Tree[node] += val;
    else{
        int mid = (start+end)/2;
        update(x,val,node*2,start,mid);
        update(x,val,2*node+1,mid+1,end);
        Tree[node] = Tree[2*node] + Tree[2*node+1];
    }
}

long long query(int x,int y,int node = 1,int start = 0,int end = N-1){
    if(start > y || end < x) return 0;
    if(end<= y && start >= x) return Tree[node];
    else{
        int mid = (start+end)/2;
        return query(x,y,2*node,start,mid)+query(x,y,2*node+1,mid+1,end);
    }
}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>N;
    Arr.resize(N);
    for(int i=0;i<N;i++){
        cin>>Arr[i];
    }
    N++;
    Tree.resize(4*N);
    init();
    int t;
    cin>>t;
    while(t--){
        char op;
        cin>>op;
        if(op == 'U'){
            int x,val;
            cin>>x>>val;
            update(x-1,val);
        }
        else{
            int x,y;
            cin>>x>>y;
            cout<<query(x-1,y-1)<<"\n";
        }
    }
}