#include<stdio.h>
#pragma GCC optimize("Ofast")
#define Hd main(void){Solve();}

void inVal(int *r,int *c,int a[50][50]){
    scanf("%d%d",r,c);
    for(int i=0;i<(*r);i++){
        for(int j=0;j<(*c);j++){
            scanf("%d",&a[i][j]);
        }
    }
}

int Comp(int a[50][50],int i, int j,int r,int c){
    if(i-1>=0&&i+1<r){
        if(j-1>=0&&j+1<c){
            if((a[i][j]==a[i-1][j]||a[i][j]==a[i+1][j]||a[i][j]==a[i][j-1]||a[i][j]==a[i][j+1])||(a[i][j]==a[i+1][j+1]||a[i][j]==a[i+1][j-1]||a[i][j]==a[i-1][j+1]||a[i][j]==a[i-1][j-1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else if(j==0){
            if((a[i][j]==a[i-1][j]||a[i][j]==a[i+1][j]||a[i][j]==a[i][j+1]||a[i][j]==a[i-1][j+1]||a[i][j]==a[i+1][j+1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else if(j==c-1){
            if((a[i][j]==a[i-1][j]||a[i][j]==a[i+1][j]||a[i][j]==a[i][j-1]||a[i][j]==a[i-1][j-1]||a[i][j]==a[i+1][j-1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        return 0;
    }
    else if(i==0){
        if(j-1>=0&&j+1<c){
            if((a[i][j]==a[i+1][j]||a[i][j]==a[i][j-1]||a[i][j]==a[i][j+1])||(a[i][j]==a[i+1][j+1]||a[i][j]==a[i+1][j-1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else if(j==0){
            if((a[i][j]==a[i+1][j]||a[i][j]==a[i][j+1]||a[i][j]==a[i+1][j+1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else if(j==c-1){
            if((a[i][j]==a[i+1][j]||a[i][j]==a[i][j-1]||a[i][j]==a[i+1][j-1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        return 0;
    }
    else if(i==r-1){
        if(j-1>=0&&j+1<c){
            if((a[i][j]==a[i-1][j]||a[i][j]==a[i][j-1]||a[i][j]==a[i][j+1])||(a[i][j]==a[i-1][j+1]||a[i][j]==a[i-1][j-1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else if(j==0){
            if((a[i][j]==a[i-1][j]||a[i][j]==a[i][j+1]||a[i][j]==a[i-1][j+1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else if(j==c-1){
            if((a[i][j]==a[i-1][j]||a[i][j]==a[i][j-1]||a[i][j]==a[i-1][j-1])){
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        return 0;
    }
    return 0;
}

int Maxadj(int r,int c,int a[50][50]){
    int mval = -1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(Comp(a,i,j,r,c)&&mval<a[i][j])
                mval = a[i][j];
        }
    }
    return mval;
}

void Solve(){
    int r,c;
    int a[50][50];
    inVal(&r,&c,a);
    int ans = Maxadj(r,c,a);
    printf("%d",ans);
}

Hd