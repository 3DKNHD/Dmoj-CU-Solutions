#include <bits/stdc++.h>
using namespace std;
//Problem dmoj.uclv.edu.cu/problem/velas
//User Hd(Derek Naharai Herrera Domínguez)
#define Hd main(void)

Hd
{
    ios::sync_with_stdio(0);
    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n+1];
    int po=-1;
    int x = -1000000000,d=0;
    for(int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
        if(ar[i]==0) {
            po=i;
            k--;
        }
        if(i>0&&ar[i-1]<0&&ar[i]>0&&ar[i-1]>x) {
            po=i;
            ar[i+1]=ar[i];
            ar[i]=0;
            i++;
            x = ar[i-1];
            if(i<n)d=1;
        }
        else if(ar[i]>0&&x==-1000000000&&!d) {
            ar[i+1]=ar[i];
            ar[i]=0;
            po=i;
            i++;
            if(i<n)d=1;
        }
    }
    if(d)scanf("%d",&ar[n]);
    if(!d&&po==-1) {
        ar[n]=0;
        po=n;
    }
    int aux = INT_MAX;
    int ac[n+1];
    ac[po]=0;
    for(int i=po+1; i<=n; i++) {
        ac[i]=abs(ar[i]-ar[i-1])+ac[i-1];
    }
    for(int i=po-1; i>=0; i--) {
        ac[i] = abs(abs(ar[i])-abs(ar[i+1]))+ac[i+1];
    }
    if(k==0) {
        printf("0");
        return 0;
    }
    for(int i=0; i<=k; i++) {
        int a,b;
        if(po-(k-i)>=0&&po+i<=n) {
            if(i>0&&k-i>0) {
                a = ac[po-(k-i)]*2;
                b = ac[po+(i)];
                int c = 2*b,d = a/2;
                if(c+d<a+b) {
                    a = d;
                    b = c;
                }
            } else {
                a = ac[po-(k-i)];
                b = ac[po+i];
            }
            aux = min(aux,a+b);
        }
    }
    printf("%d",aux);
}