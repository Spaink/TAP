#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int k,giro=0,z=0;
	string s, t;
	cin>>s>>t;
	k = s.size();
	for(int i = 0; i<=k;i++){
		int l = s[i];
		int p = t[i];
		z = abs(l-p);
		if(z<=13)
			giro+=abs(l-p);
		else
			giro+=26 - abs(l-p);
	}
	cout<<giro<<endl;
	return 0;
}