#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int p,aux=1,k=15;
    string s;
    cin>>p>>s;
    cout<<s[0]<<endl;
    for(int i=1;i<=p-1;i++){
        aux++;
        s[0] = (int)s[0]+1;
        for(int j=1;j<=aux;j++){
            if((int)s[0]>90)
                s[0] = 65;
            cout<<s[0];
        }
        cout<<endl;
    }
    return 0;
}