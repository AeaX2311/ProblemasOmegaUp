#include <iostream>
using namespace std;

typedef uint_fast64_t ifast;

int main(){
    long n,y,a=0; cin>>n;

    for(long x=1;x<=n;x++){
        y=x;
        while(y){
            a++;
            y/=10;
        }
    }
    cout<<a;
    return 0;
}
