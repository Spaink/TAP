#include <bits/stdc++.h>
using namespace std;
int compare(int a, int b){
	return a>b;
}
int main(){
	int n1,vet[4],n2,n3,n4,p=0;
	cin>>n1;
	if(n1!=6174){
		while(n1!=6174){
			vet[0] = n1/1000;
			vet[1] = (n1/100)%10;
			vet[2] = (n1/10)%10;
			vet[3] = n1%10;
			sort(vet,vet+4,compare);
			n2 = vet[0]*1000+vet[1]*100+vet[2]*10+vet[3];
			sort(vet,vet+4);
			n3 = vet[0]*1000+vet[1]*100+vet[2]*10+vet[3];
			n4 = n2-n3;
			n1 = n4;
			p++;
		}
		cout<<p<<endl;
	}else{
		cout<<p+1<<endl;
	}
	return 0;
}