#include<iostream>
#include<vector>
using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<long long> v1(0);
    vector<long long> v2(0);
    vector<long long> v3(0);
    long long a,b,c1=0,c2=0,c3=0;
    cin>>a>>b;
    v1.push_back(0);
    v2.push_back(0);
    v3.push_back(0);
    for(long long i=0;i<a;i++){
        long long c;
        cin>>c;
        if(c==1)c1++;
        if(c==2)c2++;
        if(c==3)c3++;
        v1.push_back(c1);
        v2.push_back(c2);
        v3.push_back(c3);
    }
    for(long long i=0;i<b;i++){
        long long la,lf;
        cin>>la>>lf;
        if(la==0)la++;
        cout<<v1[lf]-v1[la-1]<<" "<<v2[lf]-v2[la-1]<<" "<<v3[lf]-v3[la-1]<<endl;
        }
}