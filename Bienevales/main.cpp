#include <bits/stdc++.h>
using namespace std;
bool esPrimo(int n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(void){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,i;
	cin>>n;
	int op,val;
	vector<int> vec;
	int aux1=0;
	for( i=0;i<n;i++){
		cin>>op>>val;
		if(op==1){
			if(vec.size()-aux1+1>10&&esPrimo(val)){
				vec.insert(vec.begin()+9+aux1,val);
			}else{
				vec.push_back(val);
			}
		}else{
			aux1+=val;
		}
	}
	for( i=0;i<vec.size();i++)
		cout<<vec[i]<<" ";
	return 0;
}
