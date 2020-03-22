#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int k,j=0;
	cin>>s;
	k = s.size();
	for(int i=0;i<k;i++){
		cout << s[i];
		while (j<k && s[i] == s[j]) j++;
		i = j-1;	
	}
	cout<<endl;
	return 0;
}