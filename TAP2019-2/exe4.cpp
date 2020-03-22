#include <bits/stdc++.h>
using namespace std;
int palindromo(int p){

}
int main(){
	int n,i,k,cont=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>k;
		while(n%10>0){
			n = n/10;
			cont++;
		}
		cout<<cont<<endl;
	}
	return 0;
}