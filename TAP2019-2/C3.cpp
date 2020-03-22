#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,legais=0;
	cin>>a>>b;
	for(int i=1;i<22;i++){
		long long int x = pow(i,6);
			if(x >= a && x <= b)
				legais++;	
	}
	cout<<legais<<endl;
	return 0;
}