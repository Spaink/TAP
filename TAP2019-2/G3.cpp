#include <iostream>
using namespace std;
int main(){
	int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;
	for (int i = 1; i <= 1000000; i++){
		if(i%a == x && i%b == y && i%c == z){
			cout << i << endl;
			break;
		}
	}
	return 0;
}