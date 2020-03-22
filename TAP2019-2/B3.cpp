#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,vet_s[50],vet_diff[50],p=0,cond=0;
	cin>>n;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
				vet_s[p]=i+n/i;
				vet_diff[p]=abs(i-n/i);
				p++;
			}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<p;j++){
			if(vet_s[i]==vet_diff[j])
				cond=1;
			}
	}
	if(cond==1)
		cout<<n<<" eh desagradavel."<<endl;
	else
		cout<<n<<" nao eh desagradavel."<<endl;
	return 0;
}