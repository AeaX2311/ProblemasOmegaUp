#include <bits/stdc++.h>
using namespace std;

string voltear(string p){
    string aux="";
    for(int x=p.length()-1;x>=0;x--) aux+=p[x];

    return aux;
}
int main(void){
    ios::sync_with_stdio(false);cin.tie(0);

    int n; cin>>n; string a[n],fin;

    for(int x=0;x<n;x++) cin>>a[x];

    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            if(a[x]==voltear(a[y])){
                fin=a[x];x=n;break;
            }
        }
    }

    cout<<fin.length()<<" "<<fin[fin.length()/2];
    return 0;
}
/*
4 las god psala sal
3 a

4 solos ptq tttrp tulipan
5 l
*/
