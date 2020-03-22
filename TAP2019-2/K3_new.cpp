#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	string s;
	int t = 0;
	cin >> s;
	k = s.size();
	for( int i = 0; i < k; i++){
		t= ((t)*10) + s[i]-'0';
		t = t%11;
	}
	if(t==0)
		cout << "O numero " << s << " eh divisivel por 11." << endl;
	else
		cout << "O numero " << s << " nao eh divisivel por 11." << endl;
	return 0;
}