#include <iostream>
using namespace std;

int BusquedaBinaria(int arr[],int inicio,int tam,int busco){
	if(tam>=inicio) {
		int mid=inicio+(tam-inicio)/2;

		if(arr[mid]==busco)
			return mid;

		if(arr[mid]>busco)
			return BusquedaBinaria(arr,inicio,mid-1,busco);

		return BusquedaBinaria(arr,mid+1,tam,busco);
	}

	return -1;
}

int main(void){
    int s,p,n,resultado;cin>>s>>p;

    int arr[s];
    for(int x=0;x<s;x++)
        cin>>arr[x];

	n=sizeof(arr)/sizeof(arr[0]);
    resultado=BusquedaBinaria(arr,0,n-1,p);

	if(resultado==-1)
        cout<<"No esta";
    else
        cout<<"Casilla: "<<resultado+1;

	return 0;
}
