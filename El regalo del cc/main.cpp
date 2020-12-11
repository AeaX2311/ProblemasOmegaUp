#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    int n; double km, gr, precio=0;
    cin>>n;

  	for(int i=0;i<n;i++){
        cin>>km>>gr;
        gr/=100;
        precio += 0.25*km*gr;
    }
    printf("%.2f",precio);
    return 0;
}
