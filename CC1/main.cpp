#include <iostream>
using namespace std;

int main(){
    int n,d; cin>>n;

    string e[n];
    for(int x=0;x<n;x++){
        cin>>e[x]>>d;
    }

    int cont[n-1];
    for(int x=0;x<n;x++){
        cont[x]=0;
        for(int y=0;y<n&&e[x]!="#";y++){
            if(e[x]==e[y]){
                cont[x]++;
                e[y]="#";
            }
        }
        cout<<cont[x]<<" ";
    }
    return 0;
}
