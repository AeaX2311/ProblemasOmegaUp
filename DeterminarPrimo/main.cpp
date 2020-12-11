#include <bits/stdc++.h>
using namespace std;

bool determinarPrimo(int p){
    if(p>1){
        for(int x=2;x<p;x++){
            if(p%x==0)
                return false;
        }
        return true;
    }
    return false;
}

int main(){
    int n; cin>>n;
    if(determinarPrimo(n))
        cout<<"primo";
    else
        cout<<"no";
    return 0;
}
