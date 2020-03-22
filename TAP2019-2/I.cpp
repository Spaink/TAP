#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k=0,qtd_v=0,qtd_h=0,p;
	char floco[21][21];
	cin>>n;
	p=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>floco[i][j];
		}	
	}
	for(int j=0;j<n;j++){
		if(floco[0][j]==floco[n-1][j])
			qtd_h++;
		
	}
	for(int i=0;i<n;i++){
		if(floco[i][0]==floco[i][n-1])
			qtd_v++;	
	}
	if(qtd_h==p && qtd_v<p)
		cout<<"Beautiful\n";
	if(qtd_h<p && qtd_v==p)
		cout<<"Graceful\n";
	if(qtd_h==p && qtd_v==p)
		cout<<"Magnificent\n";
	if(qtd_h<p && qtd_v<p)
		cout<<"Useless\n";
	return 0;
}