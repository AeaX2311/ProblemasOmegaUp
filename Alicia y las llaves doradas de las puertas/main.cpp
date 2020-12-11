#include <stdio.h>
using namespace std;

int main(){
    int arr[100000];
    for(int x=0;x<=100000;x++)
        arr[x]=0;
    int cp,cll;cin>>cp;
    for(int x=0;x<cp;x++){
        cin>>cll;arr[cll]=x+1;
    }
    cin>>cll;
    for(int x=0;x<cll;x++){
        cin>>cp;
        cout<<arr[cp]<<" ";
    }

    return 0;
}
