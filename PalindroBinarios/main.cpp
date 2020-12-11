#include <iostream>
#include <sstream>
using namespace std;
struct res{
    string a;
};
int SumarUnoBinario(int h,int acu){
    while(h!=0){
        if(h%2==1)
            acu++;

        h/=2;
    }
    return acu;
}

bool DP(string palin){
    for(int x=0;x<(palin.length()/2);x++){
        if(palin[x]!=palin[palin.length()-x-1])
            return false;
    }
    return true;
}



int main(){
    int x,y,h,acu,n; cin>>n;
    string p; bool val;
    res r[n];
    for(x=0;x<n;x++){
        cin>>p; val=true;
        ostringstream vst;
        for(y=0;y<p.length();y++){
            h=p[y]; acu=0;
            vst<<SumarUnoBinario(h,acu);
        }
        p=vst.str();

        if(DP(p)){
           // cout<<"SI "<<p;
            r[x].a="SI "+p;
        }
        else
           // cout<<"NO ";
           r[x].a="NO ";
    }


    for(int i=0;i<n;i++)
        cout<<r[i].a<<endl;

	return 0;
}
