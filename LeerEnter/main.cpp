#include <stdio.h>
#define enter '\n'
int main(){
    int n,j,ac=0; scanf("%i",&n);
    char f;

    for(short x=0;x<n;x++){
        do{
            scanf("%i",&j);
            ac+=j;
            scanf("%c",&f);
        }while(f != enter);
    }

    printf("%i",ac);

    return 0;
}
