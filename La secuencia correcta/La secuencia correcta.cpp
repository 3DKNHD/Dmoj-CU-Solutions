#include<stdio.h>
#define Hd main()
Hd
{
    unsigned long long N,ANSWR=0;
    scanf("%llu",&N);
    if(N>99999999){
        unsigned long long aux=N-99999999;
        ANSWR+=aux*9;
        N-=aux;
    }
    if(N>9999999){
        unsigned long long aux=N-9999999;
        ANSWR+=aux*8;
        N-=aux;
    }
    if(N>999999){
        unsigned long long aux=N-999999;
        ANSWR+=aux*7;
        N-=aux;
    }
    if(N>99999){
        unsigned long long aux=N-99999;
        ANSWR+=aux*6;
        N-=aux;
    }
    if(N>9999){
        unsigned long long aux=N-9999;
        ANSWR+=aux*5;
        N-=aux;
    }
    if(N>999){
        unsigned long long aux=N-999;
        ANSWR+=aux*4;
        N-=aux;
    }
    if(N>99){
        unsigned long long aux=N-99;
        ANSWR+=aux*3;
        N-=aux;
    }
    if(N>9){
        unsigned long long aux=N-9;
        ANSWR+=aux*2;
        N-=aux;
    }
    ANSWR+=N;
    printf("%llu\n",ANSWR);
}