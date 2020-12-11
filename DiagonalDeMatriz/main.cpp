#include <stdio.h>

int main(){
  int n; scanf("%i",&n); int mc[n][n],aux;
  for(int x=0;x<n;x++)
    for(int y=0;y<n;y++)
        scanf("%i",&mc[x][y]);

    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            if(x==y){
                if(x+1<n){
                    aux=mc[x][y];
                    mc[x][y]=mc[x+1][y];
                    mc[x+1][y]=aux;
                }
            }
        }
    }

    printf("La matriz ressultante es:\n");
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            printf("%i ",mc[x][y]);
        }
        printf("\n");
    }

   return 0;
}
