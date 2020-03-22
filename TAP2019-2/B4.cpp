#include <bits/stdc++.h>
using namespace std;
int fat(int n){
	if(n <= 1)
		return 1;
	else
		return n*fat(n-1);
}
int main(){
	int k, pos, n = 0, aux;
	cin >> k;
	vector <int> v;
	for(int i=1; i <= 9; i++){
		v.push_back(fat(i));
	}
	sort(v.begin(),v.end());
	while(k > 0){
		auto pos = lower_bound(v.begin(), v.end(), k);
		if(*pos>k){
			aux = *pos--;
			k -= *pos;
			n++;
		}
		if(*pos == k){
			aux = *pos;
			k -= *pos;
			n++;
		}
	}
	cout << n << endl;
	return 0;
}