#include <iostream>
using namespace std;

int main(){
    short n; cin>>n;

    int** a=new int *[n];
    for(int x=0;x<n;x++)
        a[x]=new int[x];

    for(int x=0;x<n;x++)
        for(int y=0;y<n;y++)
            cin>>a[x][y];

    for(int x=0;x<n;x++){
        for(int y=n-1;y>=0;y--){
           cout<<a[y][x]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
