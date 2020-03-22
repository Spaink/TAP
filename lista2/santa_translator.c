#include <stdio.h>
#include <string.h>

int main(){

    char dicionario[24][2][30] = {

        {"brasil","Feliz Natal!"},
        {"alemanha","Frohliche Weihnachten!"}, 
        {"austria","Frohe Weihnacht!"},
        {"coreia","Chuk Sung Tan!"},
        {"espanha","Feliz Navidad!"},
        {"grecia","Kala Christougena!"},
        {"estados-unidos","Merry Christmas!"},
        {"inglaterra","Merry Christmas!"},
        {"australia","Merry Christmas!"},
        {"portugal","Feliz Natal!"},
        {"suecia","God Jul!"},
        {"turquia","Mutlu Noeller"},
        {"argentina","Feliz Navidad!"},
        {"chile","Feliz Navidad!"},
        {"mexico","Feliz Navidad!"},
        {"antardida","Merry Christmas!"},
        {"canada","Merry Christmas!"},
        {"irlanda","Nollaig Shona Dhuit!"},
        {"belgica","Zalig Kerstfeest!"},
        {"italia","Buon Natale!"},
        {"libia","Buon Natale!"},
        {"siria","Milad Mubarak!"},
        {"marrocos","Milad Mubarak!"},
        {"japao","Merii Kurisumasu!"},

    };


   char pais[30];
   int i;

   while (scanf("%s",pais) != EOF)
   {

      for(i = 0; i <= 23 ; i++){
        if(!strcmp(pais,dicionario[i][0])) break;
      }

      if (i == 24)
        printf("--- NOT FOUND ---\n");
      else
        printf("%s\n",dicionario[i][1]);

   }

   return 0;
}