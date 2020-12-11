#include<iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int p; cin>>p; int a,y,aux,aux2;


    for(int x=0;x<p;x++){
        if(x<=a){
            for(y=x;y<a;y++)
                cout<<"-";

            y-=x;aux=0;
            for(y;y<p-a;y++){
                cout<<"+";aux++;
            }
            aux+=y-1;
            for(y;y<aux;y++)
                cout<<"+";
        }else{
            aux=0;
            for(y=0;y<x-a;y++){
                cout<<"-";aux++;
            }

            aux+=p-x;aux2=0;
            for(y;y<aux;y++){
                cout<<"+";aux2++;
            }
            aux2+=y-1;
            for(y;y<aux2;y++)
                cout<<"+";
        }
        cout<<endl;
    }

    return 0;
}
