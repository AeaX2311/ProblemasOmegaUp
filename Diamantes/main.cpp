#include <stdio.h>
int main(){
    short n,r,aux1,aux2,aux3; bool t=true;
    scanf("%hu",&n);
    aux1=n-1;r=2*n-1;
    for(short x=0;x<2*n-1;x++){
        if(aux1<0){
            aux1*=-1;
            t=false;
        }
        aux2=0;aux3=0;
        for(short y=aux1;y>0;y--){
            printf("-");
            aux2+=2;
            aux3++;
            aux1--;
        }
        for(short y=0;y<r-aux2;y++){
            printf("+");
            aux3++;
        }
        for(short y=aux3;y<r;y++){
            printf("-");
            aux1++;
        }
        if(t)
            aux1--;
        else
            aux1++;

        printf("\n");
    }

    return 0;
}
