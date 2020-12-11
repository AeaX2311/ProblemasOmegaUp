#include <bits/stdc++.h>
using namespace std;

int a=1;

string Transformar(string pal){
    a=0;
    for(int x=0;x<pal.length();x++)
        pal[x]=='A'?pal[x]='B':a++;

    for(int x=a;x;x--)
        pal+='A';

    return pal;
}

int main(void){
    ios::sync_with_stdio(false);cin.tie(0);

    int k,b; cin>>k; string pal = "A";

    for(int x=0;x<k;x++){
        pal=Transformar(pal);
    }

    b=pal.length()-a;

    cout<<a<<" "<<b;
    return 0;
}
