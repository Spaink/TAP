#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int p;
    cin>>p;
    for(int j=0;j<p;j++){
        for(int q=0;q<p;q++){
            if(j==0 || j==p-1 || q==0 || q==p-1 )
                cout<<'#';
            else
                cout<<'J';
        }
        cout<<endl;
    }
    return 0;
}