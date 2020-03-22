#include <bits/stdc++.h>
using namespace std;
int soma_divisores(int n){
	int soma = 0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			soma+=i;
			if(i!=n/i)
				soma+=n/i;
		}
	}
	return soma-n;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int k,soma;
	cin>>k;
	soma = soma_divisores(k);
	if(soma==k)	
		cout<<k<<" eh um numero perfeito."<<endl;
	if(soma>k)
		cout<<k<<" eh um numero abundante."<<endl;
	if(soma<k)
		cout<<k<<" eh um numero deficiente."<<endl;
	return 0;
}