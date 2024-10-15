#include <iostream>
#include <string>

#include <vector>
#define Hd main()
using namespace std;

string pluss(string a, string b,int base) {
    string result = "";
    int carry = 0,sum=0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum /base;
        sum = sum % base;
        result = to_string(sum) + result;
    }

    return result;
}


string mult(string a,int base,char c) {
    string result = "";
    int x=c-'0';
    int carry = 0;
    int i = a.length() - 1;

    while (i >= 0 ||carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += (a[i] - '0')*x;
            i--;
        }
        carry = sum/base;
        sum = sum % base;
        result = to_string(sum) + result;
    }

    return result;
}

Hd{
    string a,b="10001";
    int base=2;
    cin>>a;
    string bin="",result="";
    if(a.size()>b.size()){
        bin+=b;
        result+=a;
    }
    else {
        bin+=a;
        result+=b;
    }
    string ax=result;
    result = "";
    vector<string> ceros={"","0","00","000","0000","00000","000000","0000000","00000000","000000000"};
        
        for(long long i=0;i<bin.size();i++){
        if(bin[i]!='0'){
            string aux = mult(ax,base,bin[i])+ceros[(bin.size()-1)-(i)];
            result = pluss(aux,result,base);
        }
    }
    cout <<result << "\n";
}