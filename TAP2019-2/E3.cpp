#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x,m,k=0;
	cin>>x>>m;
	for(int i=1;i<=m;i++){
		if((x*i)%m==1){
			k=i;
			break;
		}
	}
	if(k!=0)
		cout<<k<<endl;
	else
		cout<<"Nao existe este tipo de inteiro."<<endl;
	return 0;
}