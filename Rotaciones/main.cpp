#include <iostream>
using namespace std;

void RotarIzq(int auxi, int n,int a[]){
    int aux;
    for(int z=0;z<auxi;z++){
        for(int y=0;y<n;y++){
            aux=a[y];
            a[y]=a[y+1];
            a[y+1]=aux;
        }
    }
}
void RotarDer(int auxi, int n, int a[]){
    int aux;
    for(int z=0;z<auxi;z++){
        for(int y=n;y>0;y--){
            aux=a[y];
            a[y]=a[y-1];
            a[y-1]=aux;
        }
    }
}
int main(void){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m,auxi; char auxc; cin>>n>>m;

    int a[n];
    for(int x=0;x<n;x++)
        cin>>a[x];

    for(int u=0;u<m;u++){
        cin>>auxc>>auxi;
        switch(auxc){
    case 'D':
        RotarIzq(auxi,n-1,a);
        break;
    case 'I':
        RotarDer(auxi,n-1,a);
        break;
    case 'R':
        cout<<a[auxi-1]<<endl;

        break;
        }
    }

    return 0;
}
