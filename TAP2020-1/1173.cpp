#include <bits/stdc++.h>
using namespace std;

int main(){

  int k, n[11];

  cin >> k;
  n[0] = k;
  
  for(int i = 1 ; i < 11; i++){
      n[i] = 2*n[i-1];
  }

  for(int i = 0 ; i < 11; i++){
    cout << "N[" << i << "] = " << n[i] << endl;
  }

  return 0;
}