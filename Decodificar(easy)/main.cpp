#include <iostream>
#include <sstream>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);cin.tie(0);
    string pal,pf="",aux; char d; int g;
    cin>>pal;

    for(int x=0;x<pal.length();x+=2){
        aux=pal[x];aux+=pal[x+1];
        stringstream tomar(aux);
        tomar>>g; d='a';
        for(int y=0;y<g;y++)
            d++;

        pf+=d;
    }
    cout<<pf;

    return 0;
}

