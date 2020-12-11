#include <bits/stdc++.h>
using namespace std;

int n,a[1000000]; bool ban=true;

int DeterminarMenor(){
    int men=1000000; ban=false;
    for(int x=0;x<n;x++)
        if(a[x]<men && a[x]!=0){ men=a[x]; ban=true; }

    for(int x=0;x<n;x++) if(a[x]>0) a[x]-=men;

    return men;
}
int main(void){
    ios::sync_with_stdio(false);cin.tie(0);
    int k; cin>>n>>k;

    for(int x=0;x<n;x++) cin>>a[x];

    for(int x=0;x<k;x++){
        int y=DeterminarMenor();
        ban?cout<<y<<endl:cout<<'0'<<endl;
    }

    return 0;
}
