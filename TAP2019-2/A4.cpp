#include <bits/stdc++.h>
using namespace std;
int main(){
	double a, c, v, resto, viagens;
	cin >> c >> a;
	v = a/(c-1);
	viagens = (int)v;
	resto = v - (int)v;
	if( resto > 0)
		viagens++;
	cout << viagens << endl; 
	return 0;
}