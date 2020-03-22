#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,aux=1;
	vector<int> vet_5;
	cin>>n;
	while(vet_5.size()<=n){
		 aux*=5;
		 vet_5.push_back(aux);
		int aux_s = vet_5.size();
		for (int i = 0; i < aux_s-1 ; i++){
		 	vet_5.push_back(aux+vet_5[i]);
		 } 
	}
	cout<<vet_5[n-1]<<endl;
	return 0;
}