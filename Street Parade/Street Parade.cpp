#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

bool si(vector<int> trucks){
    int act = 1;
    stack<int> calle;

    for(int truck:trucks){
        if(truck==act){
            act++;
        }
        else{
            while(!calle.empty()&&calle.top()==act){
                act++;
                calle.pop();
            }
            calle.push(truck);
        }
    }

    while(!calle.empty()&&calle.top()==act){
        act++;
        calle.pop();
    }

    return calle.empty();
}

Hd
{
    ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    while(n){
        vector<int> trucks(n);
        for(int i=0;i<n;i++)cin>>trucks[i];
        if(si(trucks))cout<<"yes\n";
        else cout<<"no\n";
        cin>>n;
    }
}