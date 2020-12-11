#include <iostream>
using namespace std;

int main(){
    bool v; string a;
    int n,pi,pf,pm; cin>>n;

    int g[n-1];
    for(int x=0;x<n;x++){
        cin>>a; v=true;
        pi=0,pf=a.length()-1;  pm=pf/2;
        while(pi<=pm){
            if(a[pi]==a[pf]){
                if(pi==pm)
                    break;
            }else{
                v=false;
                break;
            }
            pi++; pf--;
        }
        if(v)
            g[x]=1;
        else
            g[x]=0;
    }
    for(int x=0;x<n;x++){
        if(g[x]==1)
            cout<<" P"<<endl;
        else
            cout<<" NP"<<endl;
    }

    return 0;
}
