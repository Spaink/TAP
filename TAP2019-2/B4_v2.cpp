#include <bits/stdc++.h>
using namespace std;
int fat(int n){
	if(n <= 1)
		return 1;
	else
		return n*fat(n-1);
}
int main(){
	int k, pos, n = 0, aux, cont=0;
	cin >> k;
	vector <int> v;
	for(int i=1; i <= 9; i++){
		v.push_back(fat(i));
	}
	int tam = v.size()-1;
	sort(v.begin(),v.end());
	while(k>0){
		for(int i=0; i <= tam; i++){
			if(v[i]<k)
				n++;
		}
		k-=v[n-1];
		cont++;
	}
	cout << cont << endl;
	return 0;
}