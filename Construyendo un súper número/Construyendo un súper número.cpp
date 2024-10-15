#include <bits/stdc++.h>
using namespace std;
#define Hd main(void)
long long sum(string x,int a){
    if(a==0)return (x[0]-'0');
    return (x[a]-'0')+sum(x,a-1);
}

Hd
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.precision(0);
    string n;
    long long c=34047161064;
    int k,v;
    long long solution=0,sumDi=0;
    cin>>v>>k>>n;
    long long aux=n.size();
    solution = aux;
    sumDi=sum(n,n.size()-1);
    long long solDi=sumDi;
    for(int i=1;i<k;i++){
        solDi+=sumDi*(solution-1);
        solution+=(aux * (solution-1)%c);
    }
    if(v==2){
        cout<<(solution%c)<<endl;
        cout<<(solDi%3==0 ? "Si":"No")<<endl;
        return 0;
    }
    cout<<(solution%c)<<endl;
    return 0;
}