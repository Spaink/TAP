#include <bits/stdc++.h>
using namespace std;

int main(){
  int k ;

  cin >> k;

  while(k != 0){

    int vet[k];

    for(int i = 0; i < k ; i++){
      vet[i] = i+1;
    }

    for(int i = 0; i < k ; i++){
      if(i < k -1)
        cout << vet[i] << " ";
      if( i == k -1 )
        cout << vet[i] << endl;
    }
    
    cin >> k;
  }
  return 0;
}