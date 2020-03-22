#include <bits/stdc++.h>
using namespace std;
long long int cont_dig(long long int x){
	long long int cont = 0;
	while(x>0){
		x/=10;
		cont++;
	}
	return cont;
}
int main(){
	long long int x, dig, aux, alg, k;
	cin >> x;
	k = x;
	dig = cont_dig(x);
	for(long long int i = dig; i>=2 && dig>=2; i--){
		alg = x%10;
		x/=10;
		x -= alg;
		aux = cont_dig(x);
		dig = aux;
	}
	if(x==0)
		cout << "numero " << k << " eh divisivel por 11." << endl;
	else
		cout << "numero " << k << " nao eh divisivel por 11." << endl;
	return 0;
}