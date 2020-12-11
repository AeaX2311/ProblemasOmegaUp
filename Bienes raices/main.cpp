#include <bits/stdc++.h>
using namespace std;

long ObtenerSumaMaxima(long* arr, long* in, long* fi, long n){
    long sum=0,smax=LONG_MIN,pi=0;*fi = -1;

     for (long x=0;x<n;x++){//++x
        sum+=arr[x];
        if (sum<0){
            sum=0; pi=x+1;
        }
        else if(sum>smax){
            smax=sum; *in=pi; *fi=x;
        }
    }

     if (*fi!=-1) return smax;

    smax=arr[0];
    *in=*fi=0;

     for (long x=1;x<n;x++){
        if (arr[x]>smax){
            smax=arr[x];
            *in=*fi=x;
        }
    }

    return smax;
}

int main(){
    long n; cin>>n; long M[n][n];

    for(long i=0;i<n;i++)
        for(long j=0;j<n;j++)
            cin>>M[i][j];

    long smax = LONG_MIN,fizq,fder,sup,ab,izq,der,temp[n],sum,in,fi;

    for(izq =0;izq<n;++izq){
        memset(temp,0,sizeof(temp));

        for(der=izq;der<n;der++){
            for(long i=0;i<n;i++) temp[i] += M[i][der];

            sum=ObtenerSumaMaxima(temp,&in,&fi,n);
            if(sum>smax){
                smax=sum; fizq=izq;
                fder=der; sup=in;
                ab=fi;
            }
        }
    }

    cout<<smax;

    return 0;
}
