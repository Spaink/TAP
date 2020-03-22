#include <bits/stdc++.h>
using namespace std;

int main(){

  long long int fib[61];
  int n, k;

  fib[0] = 0;
  fib[1] = 1;

  for(int i = 2; i <= 60; i++){
      fib[i] = fib[i-1] + fib[i-2];
  }

  cin >> n;

  for(int j = 0; j < n; j++){
    cin >> k;

    cout << "Fib(" << k << ") = " <<fib[k] << endl; 
  }

  return 0;
}