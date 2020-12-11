#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n; int a[n-1];
    cin>>a[0];m=a[0];

    for(int x=1;x<n;x++){
        cin>>a[x];
        if(a[x]>m)
            m=a[x];
    }
    for(int y=m;y>0;y--){
        for(int x=0;x<n;x++){
            if(a[x]>=y)
                cout<<(char) 178;
            else
                cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
