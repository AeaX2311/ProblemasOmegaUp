#include <iostream>
using namespace std;

int Arr[50],arr=50;

int Digits(unsigned long long int n){
    if(n==0)
        return 1; int a=0;
    while(n%10||n>0){
        Arr[arr]=n%10;
        n/=10;a++;arr--;
    } return a;
}

int main(void){
    ios::sync_with_stdio(false);cin.tie(0);

    unsigned long long int n,rep,mult=1,mult2=1,res=0; cin>>n; rep=Digits(n);
    unsigned long long int narr=arr+1,aux1,y=0;arr=50;

    for(int x=1;x<rep;x++){ mult*=10;mult2*=10;}

    for(int x=narr;x<51;x++,y++,mult/=10){
        if(y==0){
            aux1=Arr[x];
        }else if(y==1){
            res+=Arr[x]*mult;
        }else{
            res+=Arr[x]*mult2+aux1*mult;
            mult2/=1000; y=-1;
        }
    }

        //si y=0 no se hace nada
    if(y==1){
        res+=Arr[50];
    }else if(y==2){
        res+=Arr[49]*10;
    }

    cout<<res*3;
    return 0;
}
