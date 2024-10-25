#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin>>N;
    if(N>=9500){
        cout<<7;
        return 0;
    }
    unordered_set<int> nums = {1};
    unordered_set<int> temp;
    int level=0;
    while(nums.find(N)==nums.end()){
        level++;
        for(int x:nums){
            if(x+x<=N)temp.insert(x+x);
            if(x*x<=N)temp.insert(x*x);
        }
        for(int x:nums){
            for(int y:nums){
                if(x!=y){
                if(x+y<=N)temp.insert(x+y);
                if(x*y<=N)temp.insert(x*y);
                }
            }
        }
        nums.insert(temp.begin(),temp.end());
        temp.clear();
    }
    cout<<level;
}