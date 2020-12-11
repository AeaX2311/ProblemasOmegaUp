#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m,saltos=0; string p; cin>>n>>m>>p;
    bool t=true;

    for(int x=0;x<n&&t;){
        int aux=m;
        while(aux){
            if(p[aux+x-1]=='1'){
                saltos++;
                x+=aux;
                break;
            }
            aux--;
        }
        if(aux==0) t=false;
    }

    t?cout<<saltos:cout<<"-1";
    return 0;
}

