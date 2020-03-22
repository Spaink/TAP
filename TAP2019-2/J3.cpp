#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	for(int i = x; i <= y; i+=60)
		cout << "Todas as posicoes mudam no ano " << i << "." << endl;
	return 0;
}