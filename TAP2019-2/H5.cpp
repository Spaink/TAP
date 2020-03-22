#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long v, n, tot,p;
	cin >> v >> n;
	tot = v*n;	 
	for(long long  i=10; i<=90; i+=10){
		if(i!=10)
			cout<<" ";
		cout<<(tot*i+99)/100;
	}
	cout<<endl;
	return 0;
}