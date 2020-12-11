#include <stdio.h>
int main(){
    short n,k,aux; bool co;
    scanf("%hu",&n); n--; short pss[n];
    for(short x=0;x<=n;x++)
        scanf("%hu",&pss[x]);

    scanf("%hu",&k);
    for(short x=0;x<=n && k>0;x++){
        scanf("%hu",&aux);

        if(aux==pss[x]){
            co=true;
        }else{
            printf("ERROR\n");
            x=-1;
            co=false;
            k--;
        }
    }

    if(co)
        printf("ACCESO AUTORIZADO\n");
    else
        printf("ACCESO DENEGADO\n");

    return 0;
}
