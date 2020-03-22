#include <bits/stdc++.h>
using namespace std;
#define eps 1e-9
int main(){
	double n, d, parte_decimal;
	int parte_inteira, n_decimal = 1, d_decimal =1;
	cin >> n >> d;
	parte_inteira = n/d;
    if(parte_inteira != 0)
	   cout << parte_inteira <<" ";
    else
        cout << parte_inteira <<" ";
    parte_decimal = (n/d) - (double)parte_inteira;
    int k = parte_decimal * 100;
    if(parte_decimal != 0)
        cout << k/__gcd(k, 100) << "/" << 100/__gcd(k, 100) << endl;
	return 0;
}