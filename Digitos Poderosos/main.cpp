#include <stdio.h>

unsigned long long Sumar(unsigned long long n){
    if(n==0)
        return 0;
    return n%10+Sumar(n/10);
}
int main(void){

    int num; scanf("%i",&num);

    unsigned long long n,m;
    for(int x=0;x<num;x++){
        scanf("%llu%llu",&n,&m);
        n=Sumar(n)*m;
        while(n>9){
            n=Sumar(n);
        }

        printf("%llu\n",n);
    }


    return 0;
}
