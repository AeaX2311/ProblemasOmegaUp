#include <bits/stdc++.h>
using namespace std;

int main(){
    short a,b; string p=""; cin>>a>>b;
    p+=static_cast<std::ostringstream*>(&(std::ostringstream() << a))->str();
    p+=static_cast<std::ostringstream*>(&(std::ostringstream() << b))->str();

    short an1=a,an2=b,sum=0,acu=0;

    while(!(an1==a&&sum==b)){
        sum=an1+an2;

        if(sum>=10)
            sum-=10;

        an1=an2;
        an2=sum;

        p+=static_cast<std::ostringstream*>(&(std::ostringstream() << sum))->str();

        acu++;
    }

    for(int x=0;x<p.length();x++)
        cout<<p[x]<<" ";

    cout<<endl<<acu;
    return 0;
}
