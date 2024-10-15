#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define Hd main(void)
unsigned long Count(string &origen, string &sub);
Hd{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<long long> a(0);
    long long c;
    cin>>c;
    string origen;
    cin>>origen;
    string subcadena=origen.substr(0,1);
    long long s=subcadena.size(),i=1;
    while(s*2<=c){
        long long apar=Count(origen, subcadena);
        if(apar*s==c)a.push_back(s);
        i++;
        subcadena+=origen[i-1];
        s=subcadena.size();
    }
    cout<<a.size()<<endl;
    for(long long i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
unsigned long Count(string &origen, string &sub) {
    unsigned long apariciones = 0;
    string substr = "";
    long long c=sub.size(),d=origen.size();
    for (size_t i = 0; i <= (d - c); i+=c) {
        if (origen.substr(i, c) == sub) {
            apariciones++;
        }
    }
    return apariciones;
}