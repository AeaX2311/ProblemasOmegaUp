#include <iostream>
using namespace std;

static string clv = "CodingRush2014";
string Eliminar(int pi, string p){
    for(int x=pi;x<pi+14;x++){
        p[x]=' ';
    }
    return p;
}
int Validar(string p){
    int acu=0,a; bool iu;
    for(int x=0;x<p.length();x++){
        if(p[x]!=' '){
            a=0; iu=true;
            for(int y=x;y<x+14&&iu;y++){
                if(p[y]!=clv[a]){
                   iu=false;
                }
                a++;
            }
            if(iu){
                p=Eliminar(x,p);
                acu++;
            }
        }
    }
    return acu;
}


int main(){
    string p; getline(cin,p);

    cout<<Validar(p);
    return 0;
}
