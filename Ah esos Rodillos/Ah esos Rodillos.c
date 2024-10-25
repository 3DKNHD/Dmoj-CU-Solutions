#include<stdio.h>
#define Hd main(void)
struct Point {
    int x,y;
};
Hd { 
    int n;
    scanf("%d",&n);
    struct Point p[n];
    int rads[n];
    int conects[n] = {};
    int p0;
    for(int i=0; i<n; i++) {
        scanf("%d%d%d",&p[i].x,&p[i].y,&rads[i]);
        if(p[i].x == 0 && p[i].y == 0)p0=i;
    }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            int dis = ((p[i].x-p[j].x)*(p[i].x-p[j].x) + (p[i].y-p[j].y)*(p[i].y-p[j].y));
            if(dis == (rads[i]+rads[j])*(rads[i]+rads[j])) {
                conects[i]++;
                conects[j]++;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(conects[i]==1 && i!=p0) {
            printf("%d %d",p[i].x,p[i].y);
            return 0;
        }
    }
}