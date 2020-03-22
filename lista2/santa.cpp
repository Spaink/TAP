#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map <string, string> map;
    string s;

    map["brasil"] = "Feliz Natal!";
    map["alemanha"] = "Frohliche Weihnachten!";
    map["austria"] = "Frohe Weihnacht!";
    map["coreia"] = "Chuk Sung Tan!";
    map["espanha"] = "Feliz Navidad!";
    map["grecia"] ="Kala Christougena!";
    map["estados-unidos"] = "Merry Christmas!";
    map["inglaterra"] = "Merry Christmas!";
    map["australia"] = "Merry Christmas!";
    map["portugal"] = "Feliz Natal!";
    map["suecia"] = "God Jul!";
    map["turquia"] ="Mutlu Noeller";
    map["argentina"] = "Feliz Navidad!";
    map["chile"] = "Feliz Navidad!";
    map["mexico"] = "Feliz Navidad!";
    map["antardida"] = "Merry Christmas!";
    map["canada"] = "Merry Christmas!";
    map["irlanda"] = "Nollaig Shona Dhuit!";
    map["belgica"] = "Zalig Kerstfeest!";
    map["italia"] ="Buon Natale!";
    map["libia"] ="Buon Natale!";
    map["siria"] ="Milad Mubarak!";
    map["marrocos"] = "Milad Mubarak!";
    map["japao"] = "Merii Kurisumasu!";
     
    cin >> s;

    while(cin >> s){

        if(map.count(s) == 0){

            cout<<"--- NOT FOUND ---\n";

        }else{

            cout<<map[s]<<"\n";
        }

    }

}