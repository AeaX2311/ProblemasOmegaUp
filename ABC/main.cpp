#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,A,B,C; string g;
    cin>>n1>>n2>>n3;

    if(n1>=n2&&n1>=n3){
        if(n2>=n3){
            C=n1;
            B=n2;
            A=n3;
        }else{
            C=n1;
            B=n3;
            A=n2;
        }
    }else if(n2>=n1&&n2>=n3){
        if(n1>=n3){
            C=n2;
            B=n1;
            A=n3;
        }else{
            C=n2;
            B=n3;
            A=n1;
        }
    }else if(n1>=n2){
        C=n3;
        B=n1;
        A=n2;
    }else{
        C=n3;
        B=n2;
        A=n1;
    }

    cin>>g;
    for(int x=0;x<3;x++){
        switch(g[x]){
        case 'A':
            cout<<A<<" ";break;
        case 'B':
            cout<<B<<" ";break;
        case 'C':
            cout<<C<<" ";break;
        }
    }
    return 0;
}
