#include <bits/stdc++.h>
using namespace std;
int BuscaBinaria(int *vet,int n, int k){
    int mid, start=0, end=n-1;
    int rs=-1;
    while(start<=end){
        mid = (start+end)/2;  
            if(k>vet[mid])
                start = mid+1;
            else{
                if(vet[mid]==k)
                    rs=mid;
                end = mid-1;
            }
    }
    return rs;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,k,p,vet[10500],numb,cont=0;
    cin>>n>>q;
    while(n!=0 && q!=0){
        cont++;
        for(int i=0;i<n;i++){
           cin>>vet[i];
        }
        sort(vet,vet+n);
        for(int j=1;j<=q;j++){
            cin>>p;
            numb=BuscaBinaria(vet,n,p);
            if(j==1)
                cout<<"CASE# "<<cont<<":"<<endl;
            if(numb==-1)
                cout<<p<<" not found"<<endl;
            else 
                cout<<p<<" found at "<<numb+1<<endl;    
        }
       cin>>n>>q; 
    }
    return 0;
}