#include<stdio.h>
#include<math.h>
#define Hd main(void)

struct point{
    int x;
    int y;
};

Hd
{
    int n;
    scanf("%d",&n);
    struct point coord[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&coord[i].x,&coord[i].y);
    }
    int x,y;
    float m=100000000.0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            float x1=coord[i].x-coord[j].x;
            x1*=x1;
            float y1=coord[i].y-coord[j].y;
            y1*=y1;
            y1= sqrt(x1+y1);
            if(m>y1){
                m=y1;
                x=i+1;
                y=j+1;
            }
        }
    }
    printf("%d %d",x,y);
}