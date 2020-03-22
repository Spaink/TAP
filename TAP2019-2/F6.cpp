#include <bits/stdc++.h>
using namespace std;
int cont1[26];
int cont2[26];
int main(){
	string k, s;
	int tam1, tam2, cond = 0, contp=0, contl=0;
	char p, l;
	cin >> k >> s;
	tam1 = k.size();
	tam2 = s.size();
	for(int i = 0; i < tam1; i++){
		cont1[k[i]-'a']++;
	}
	for(int j = 0; j < tam2; j++){
		cont2[s[j]-'a']++;
	}
	for (int i = 26; i>=0 ; i--){
		if(cont1[i] == cont2[i]){
			cond = 1;
		}else{
			cond = 0;
			contp = cont1[i];
			contl = cont2[i];
			break;
		}
	}
	if(cond){
		cout << "The two strings are the same age" << endl; 
	}
	if(contp == 0 && contl != 0  && cond == 0){
		cout << "First string is younger"<<endl;
	}
	else if(contp != 0 && contl == 0 && cond == 0 ){
		cout << "First string is older"<<endl;
	}
	if(contp != 0 && contl != 0 && cond == 0){
		if(contp > contl){
			cout << "First string is older"<<endl;
		}else{
			cout << "First string is younger"<<endl;
		}
	}
	return 0;
}