#include<stdio.h>
#define Hd main(void)
#define MAX 1000001
int min(int a,int b) {
    return (a>b? b:a);
}
char WAY[101][101];
int Vis[101][101];
int C, R, xb,yb,xc=-1,yc;
void fill(void) {
    for(int i=0; i<101; i++) {
        for(int j=0; j<101; j++) {
            Vis[i][j]=MAX;
        }
    }
}
void FindWay(int x, int y, int cost) {
    if(x==C || y == R || x < 0 || y < 0 ) return;
    if(WAY[x][y]=='*') return;
    if(Vis[x][y]<=cost) return;
    Vis[x][y]=cost;
    if(x==0 && y==0)return;
    FindWay(x+1,y,cost+1);
    FindWay(x-1,y,cost+1);
    FindWay(x,y+1,cost+1);
    FindWay(x,y-1,cost+1);  
}
Hd {
    fill();
    scanf("%d %d",&C,&R);
    for(int i=0; i<C; i++) {
        scanf("%s",WAY[i]);
        if(xc==-1){
            for(int j=0;j<R;j++){
                if(WAY[i][j]=='B'){
                    xb=i;
                    yb=j;
                }
                if(WAY[i][j]=='C'){
                    xc=i;
                    yc=j;
                }
            }
        }
    }
    FindWay(xc,yc,0);
    printf("%d",Vis[0][0]);
}