#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,num;bool h;int n; cin>>n;

    num=static_cast<ostringstream*>(&(ostringstream() << n))->str();

    for(int x=1;x<=n;x++)
        s+=static_cast<ostringstream*>(&(ostringstream() << x))->str();

    for(int x=0;x<s.length();x++){
        if(num[0]==s[x]){
            n=x+1; h=true;
            for(int y=1;y<num.length()&&h;y++){
                if(num[y]!=s[n])
                    h=false;
                n++;
            }
            if(h){
                cout<<x+1;break;
            }
        }
    }

    return 0;

}
