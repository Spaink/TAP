#include <stdio.h>
#include <ctype.h>

int main(){
    
    char palavra[100];
    scanf("%s",palavra);

    int i = 0;

    while(palavra[i] != '\0'){

        palavra[i] = tolower(palavra[i]);

        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] =='i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'y'){
        
        }else{

           printf(".%c",palavra[i]);
        }
  
        i++;
    }
    
    printf("\n");

     return 0;
}