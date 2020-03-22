#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c,qtd=0;
    cin>>n>>m>>c;
    int vet[n],maior=-1,menor=10003;
    for(int i=0; i<n;i++){
        cin>>vet[i];
    }
    if(m<=n){
        for(int i=0; i<=n-m;i++){
           for(int j=i;j<i+m;j++){
               if(vet[j]>maior)
                    maior=vet[j];
                if(vet[j]<menor)
                    menor=vet[j]; 
           }
           if(maior-menor<=c)
                qtd++;
            maior=-1;menor=10003;
        }
    }else{
        qtd=0;
    }
    cout<<qtd<<endl;
    return 0;
}