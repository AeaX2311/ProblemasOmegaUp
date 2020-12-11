#include <iostream>
using namespace std;

int main(){
    bool t=true;short n;cin>>n;

    short Mt[n][n];
    for(short x=0;x<n;x++)
        for(short y=0;y<n;y++)
            cin>>Mt[x][y];

    for(short x=0;x<n&&t;x++){
        for(short y=0;y<n&&t;y++){
            if(Mt[x][y]!=Mt[y][x])
                t=false;
        }
    }
    if(t)
        cout<<"SI";
    else
        cout<<"NO";
    return 0;
}
