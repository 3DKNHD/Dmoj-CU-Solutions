#include<iostream>
using namespace std;
#define Hd main(void)
bool esVocal(char x){
    switch(x){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U': return true;
    default: return false;
    }
}
Hd
{
    string x;
    cin>>x;
    long long mik=0,mak=0;
    for(int i=0;i<x.size();i++){
        if(esVocal(x[i]))mik++;
        else mak++;
    }
    cout<<mik<<" "<<mak<<endl;
    return 0;
}