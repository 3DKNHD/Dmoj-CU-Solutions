#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

void revert_string(string string){
    stack<int> index;
    for(int i=0;i<string.size();i++){
        if(string[i]=='(')index.push(i);
        else if(string[i]==')'){
            int start = index.top();
            index.pop();
            reverse(string.begin()+start+1,string.begin()+i);
        }
    }
    for (char c:string){
        if(c!='('&&c!=')'){
            cout<<c;
        }
    }
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string string;
    getline(cin,string);
    revert_string(string);
}