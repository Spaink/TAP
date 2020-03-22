#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double p,result;
    string s;
    cin>>p;
    while(cin>>s){
        if(s[0]=='@')
            result = p*3;
        if(s[0]=='%')
            result = p+5;
        if(s[0]=='#')
            result = p-7;
        p = result;
    }
    printf("%.2lf\n",result);
    return 0;
}