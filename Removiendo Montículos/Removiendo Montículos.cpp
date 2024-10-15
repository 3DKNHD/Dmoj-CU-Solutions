#include<bits/stdc++.h>
#define Hd main(void)

using namespace std;
Hd{
    int n;
    scanf("%d",&n);
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    vector<int> pos(0);
    auto p = max_element(ar.begin(),ar.end());
    while(*p!=-1){
        int po = p-ar.begin();
        pos.push_back(po+1);
        int val = *p;
        for(auto aux = po-1;aux>=0;aux--){
            if(ar[aux]>=val){
                break;
            }
            else{
                val = ar[aux];
                ar[aux] = -1;
            }
        }
        val = *p;
        for(auto aux = po+1;aux<n;aux++){
            if(ar[aux]>=val){
                break;
            }
            else{
                val = ar[aux];
                ar[aux] = -1;
            }
        }
        *p = -1;
        p = max_element(ar.begin(),ar.end());
    }
    sort(pos.begin(),pos.end());
    for(auto i:pos){
        printf("%d\n",i);
    }
}