#include <stdio.h>
#include <string.h>
#define Hd main(void)

Hd 
{
    short int n, m;
    scanf("%hd%hd",&n,&m);
    int va[m][2001];
    short int con = 0;
    for(short int i = 0; i < n; i++){
        char aux[m];
        scanf("%s", aux);
        for(short int j = 0; j < m; j++)
            va[j][aux[j]] += n;
    }

    int com[m], ers[m];
    for(short int i=0;i<m;i++)com[i]=ers[i]=0;
    for(short int i = 0; i < n; i++){
        char aux[m];
        scanf("%s", aux);
        for(short int j=0;j<m;j++){
            va[j][aux[j]] -= 1;
            if (va[j][aux[j]]==-1&&!com[j]&&!ers[j]){
                ers[j] = 1;
                con++;
            } 
            else if (va[j][aux[j]] > 0) {
                com[j] = 1;
                if(ers[j])
                    con--;
                ers[j] = 0;
            }
        }
    }
    printf("%hd", con);
}