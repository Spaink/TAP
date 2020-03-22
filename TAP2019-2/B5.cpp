#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,vc;
	vector <int> v;
	cin >> n;
	for(int i=0;i<n;i++){
		cin>>k;
		v.push_back(k);
	}
	vc = v[0];
	int p = v.size()-1;
	sort(v.begin(),v.end());
	if(vc>=v[p])
		cout<< "S" << endl;
	else
		cout << "N" << endl;
	return 0;
}