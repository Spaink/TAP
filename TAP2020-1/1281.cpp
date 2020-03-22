#include <bits/stdc++.h>
using namespace std;

int pesquisaProduto(string nome, string v[], int tamanho){
    int p;

    for(int k = 0; k < tamanho; k++){
        if(nome == v[k]){
            p = k;
            break;
        }
    }

    return p;
}
int main(){

  pair<string, double> k;

  string x[1000], produto;
  double z[1000], valor = 0.0, tot = 0.0;
  int n, m, p, qtd, tam = 0, id;

  cin >> n;

  for(int i = 0; i < n; i++){

    cin >> m;

      for(int j = 0; j < m; j++){
        cin >> k.first >> k.second;
        x[j] = k.first;
        z[j] = k.second;
        tam++;
      }

    
    cin >> p;

      for(int l = 0; l < p; l++){
          cin >> produto >> qtd;
          
          id = pesquisaProduto(produto, x, tam+1);
          valor = z[id] * qtd;

          tot+=valor;

      }

      cout << fixed << setprecision(2) << "R$ "<<tot << endl;

      tam = 0;
      tot = 0;
  }

  return 0;
}