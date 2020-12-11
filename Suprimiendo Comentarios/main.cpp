#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    string p; getline(cin,p);

    for(int x=0;x<p.length();x++){
        if(p[x]=='('){
            p[x]='#';
            int y=x+1;
            while(p[y]!=')'){
                p[y]='#';
                y++;
            }
            p[y]='#';
            x=y;
        }
    }

    for(int x=0;x<p.length();x++)
        if(p[x]!='#')
            cout<<p[x];

    return 0;
}
