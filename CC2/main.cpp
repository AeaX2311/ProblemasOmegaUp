#include <stdio.h>

int main(){
    int n,p,punt=0,y=0,d; scanf("%i",&n);

    int ar[n],r[n];

    for(int x=0; x<n;x++){
        scanf("%i%i",&p,&d);
        if(p==1){
            ar[y]=d;
            y++;
        }else{
            r[punt]=0;
            for(int z=0;z<x-punt;z++){
                if(ar[z]<=d)
                    r[punt]++;
            }
            punt++;
        }
    }

    for(int i=0;i<punt;i++)
        printf("%i\n",r[i]);

    return 0;
}
