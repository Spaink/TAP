#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
      return a;
    else
      return gcd(b,a%b);  
}

int main(){

  int n, f1, f2, k;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> f1 >> f2;
    
    k = gcd(f1,f2);

    cout << k << endl;
  }

  return 0;
}