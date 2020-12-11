#include <iostream>
using namespace std;

int main(){
    int n,x,y; cin>>n; bool punt=false;

    string pal[100][100],orig,des,sa1; int aux[n];
    for(x=0;x<n;x++){
        cin>>aux[x];
        for(y=0;y<aux[x];y++){
            cin>>pal[x][y];
        }
    }
    cin>>orig>>des;
    for(x=0;x<n&&!punt;x++){
        y=0;
        while(y<aux[x]){
            if(pal[x][y]==orig){
                y++;x--;punt=true;break;
            }
            y++;
        }
    }
    if(!punt){
        cout<<"imposible";
        return 0;
    }
    punt=true;
    for(x;x<n&&punt;x++){
        for(y;y<aux[x];y++){
            if(pal[x][y]==des){
                cout<<"posible";
                return 0;
            }else if(y+1==aux[x]){
                sa1=pal[x][y];
            }
            if(y==0){
                if(sa1!=pal[x][y]){
                    cout<<"imposible";
                    return 0;
                }
            }
        }
        y=0;
    }
    return 0;

}
