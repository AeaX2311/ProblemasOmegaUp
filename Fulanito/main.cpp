#include <stdio.h>

int au,au2;
int Calcular(int x, int y,int *a){
    for(int z=x;z<x+2;z++){
        if(z%2==0)
            a[z]=y;
        else
            a[z]=au-au2;
    }
}

int main(){
    int n,m;
    scanf("%i%i",&n,&m); n*=2;

    int *a = new int[n-1];
    int *g = new int[m-1];

    for(int x=0;x<m;x++)
        scanf("%i",&g[x]);

    for(int x=0;x<n;x+=2){
        au2=0; scanf("%i",&au);
        for(int y=0;y<m;y++){
            if(au2+g[y]<=au){
                au2+=g[y];
                if(y+1==m){
                    Calcular(x,y+1,a);
                }
            }else{
                Calcular(x,y,a);
                break;
            }
        }
    }
    for(int x=0;x<n;x+=2)
        printf("%i %i\n",a[x],a[x+1]);

    delete []a;
    delete []g;

    return 0;
}
