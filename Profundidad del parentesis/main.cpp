#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string c; int a=0,m=0;
    cin>>c;

    for(int x=0;x<c.length();x++){
        if(c[x]=='(')
            a++;
        else
            a--;

        if(a>m)
            m=a;
    }
    cout<<m;

    return 0;
}
