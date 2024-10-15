#include<stdio.h>
#pragma GCC optimize("Ofast")
#define Hd main(void)

short int PT(int a,int b,int c){
    if(a==b&&b==c){
        return 0;
    }
    if(a>b && a>c){
        return 1;
    }
    if(b> a && b> c){
        return 2;
    }
    if(c>a && c>b){
        return 3;
    }
    if(b==a && a> c){
        return 4;
    }
    if(a==c&& a>b){
        return 5;
    }
    if(b==c&& b>a){
        return 6;
    }
    return -1;
}

struct Vc{
    int E;
    int M;
    int B;
};

Hd{
    struct Vc Vacas[101];
    for(short int i=0;i<=100;i++)
        Vacas[i].E = Vacas[i].B = Vacas[i].M = 0; 
    short int n;
    scanf("%hd",&n);
    while(n--){
        char vaca[10];
        short int dia,val;
        char aux;
        scanf("%hd %s %c%hd",&dia,vaca,&aux,&val);
        val *= (aux =='-'? -1:1);
        if(vaca[0]=='E'){
            Vacas[dia].E += val;
        }
        else if(vaca[0]=='M'){
            Vacas[dia].M += val;
        }
        else{
            Vacas[dia].B += val;
        }
    }
    short int con = 0;
    for(short int i=1;i<=100;i++){
        Vacas[i].B += Vacas[i-1].B;
        Vacas[i].M += Vacas[i-1].M;
        Vacas[i].E += Vacas[i-1].E;
        if(PT(Vacas[i].B,Vacas[i].E,Vacas[i].M)!=PT(Vacas[i-1].B,Vacas[i-1].E,Vacas[i-1].M))
            con++;
    }
    printf("%hd",con);
}