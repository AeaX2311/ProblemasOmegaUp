#include <stdio.h>
#include <vector>
typedef unsigned long long ull;

int main(void){
    ull n,rep,l,r,res=1,al=0,ar; scanf("%lld%lld",&n,&rep); bool f=false;
    ar=n; std::vector<ull> arr;

    for(int x=0;x<rep;x++){
        scanf("%lld%lld",&l,&r);

        if(l==r){
            arr.push_back(l);
            res++; f=true;
        }else{
            if(l>=al&&l<=ar) al=l;

            if(r>=al&&r<=ar) ar=r;
        }
    }

    if(f) res--;

    for(int x=0;x<arr.size();x++){
        bool t=true;

        while(al<=ar){
            if(arr[x]==al){
                t=false;
                break;
            }
            al++;
        }

        if(t) res++;
    }


    printf("%lld",res);
    return 0;
}
