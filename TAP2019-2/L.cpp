#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,vet[10000],p=0,cont_z=0,cont_u=0;
	cin>>k;
	while(k>0){
		vet[p]=k%2;
		k=k/2;
		p++;
	}
	for(int i=p-1;i>=0;i--){
		if(vet[i]==0)
			cont_z++;
		if(vet[i]==1)
			cont_u++;
	}
	if(cont_z>cont_u)
		cout<<"left"<<endl;
	if(cont_z==cont_u)
		cout<<"straight"<<endl;
	if(cont_z<cont_u)
		cout<<"right"<<endl;
	return 0;
}