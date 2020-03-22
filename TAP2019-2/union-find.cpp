#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
int pai[MAXN],peso[MAXN], qtd[MAXN];
int find(int x){
	if(pai[x] == x)
		return x;
	return pai[x] = find(pai[x]);
}
void join(int x, int y){
	x = find(x);
	y = find(y);
	if(x == y)
		return;
	if(peso[x] <= peso[y]){
		pai[x] = y;
		peso[y]+=peso[x];
		qtd[y]+=qtd[x];
	}
	if(peso[x] > peso[y] ){
		pai[y] = x;
		peso[x]+=peso[y];
		qtd[x]+=qtd[y];
	}
}
int main(){
	char op;
	int N, K, x, y;
	cin >> N >> K;
	for(int i = 1; i <= N; i++){
		pai[i] = i;
	}
	for(int j = 1; j <= K; j++){
		cin >> op >> x >> y;
		if(op == 'C'){
			if(find(x) == find(y)){
				cout << "S" << endl;
			}else{
				cout << "N" << endl;
			}
		}else{
			join(x,y);
		}

	}
	return 0;
}