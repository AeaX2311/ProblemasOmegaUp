#include <iostream>
using namespace std;

void ConstruirPiramide(short n){
    for(short x=n-1;x>=0;x--){
        for(short y=0;y<n-x;y++){
                cout<<"*";
        }
        cout<<endl;
    }
}

void ConstruirTriangulo(short n){
    for(short x=0;x<n;x++){
        for(short z=x;z<n-1;z++)
            cout<<" ";

        for(short y=0;y<=x+x;y++)
                cout<<"*";

        cout<<endl;
    }
}

void ConstruirCuadrado(short n){
     for(short x=1;x<=n;x++){
        for(short y=1;y<=n;y++){
                cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    short n; cin>>n;

    ConstruirPiramide(n);
    cout<<endl;
    ConstruirTriangulo(n);
    cout<<endl;
    ConstruirCuadrado(n);
    return 0;
}
