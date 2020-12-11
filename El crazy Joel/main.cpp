#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    string p;
    for(int x=1;x<=n;x++){
        p+=static_cast<std::ostringstream*>(&(std::ostringstream() << x))->str();
    }

    n=p.length()/2;

    //cout<<p<<endl;
    cout<<p[n];

    return 0;
}
