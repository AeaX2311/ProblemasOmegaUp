#include <stdio.h>

int main(void){
    int x1,y1,w1,h1,x2,y2,w2,h2;

    scanf("%i%i%i%i%i%i%i%i",&x1,&y1,&w1,&h1,&x2,&y2,&w2,&h2);

    int y1f=y1+h1, x1f=x1+w1;
    int y2f=y2+h2, x2f=x2+w2;

    if(y1f<y2){
        if(x1>x2f){ printf("6"); return 0;}
        if(x1f<x2){ printf("5"); return 0;}
        if(x1>x2 && x1f<x2f){ printf("1"); return 0;}

    }
    if(y1>y2f){
        if(x1>x2f){ printf("8"); return 0;}
        if(x1f<x2){ printf("7"); return 0;}
        if(x1>x2 && x1f<x2f){ printf("2"); return 0;}

    }

    if(x1>x2f){ printf("4"); return 0;}
    if(x1f<x2){ printf("3"); return 0;}


    if(y1f==y2||y1==y2f)
        printf("9");

    else
    printf("10");
    return 0;
}
