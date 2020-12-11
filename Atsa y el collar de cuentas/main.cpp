#include <stdio.h>

int main(void){
    int n;char c;

    c=getchar();
    scanf("%i",&n);

    int y=n%3;
    while(y){
        switch(c){
            case 'R':c='A';break;
            case 'V':c='R';break;
            case 'A':c='V';break;
        }
        y--;
    }

    printf("%c",c);

    return 0;
}
