#include <iostream>
using namespace std;

int main(){
    int n,a,b; bool M=true,m=true;
    cin>>n>>b; a=b;

    for(int x=1;x<n && (M || m);x++){
        cin>>b;

        if(b>=a && b!=a){
            a=b;
            m=false;
        }
        if(b<=a &&b!=a){
            a=b;
            M=false;
        }
    }

    if(m)
        cout<<"DECRECIENTE";
    else if(M)
        cout<<"CRECIENTE";
    else
        cout<<"NO ORDENADA";

    return 0;
}
