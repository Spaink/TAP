#include <stdio.h>
 
int main(){
    int num, bkp, i = 0, ordem = 0, j;
    int vals[] = {0, 0, 0, 0, 0};
    char ordens[][11] = {"primeira", "segunda", "terceira", "quarta"};
    char nomes[][19] = {"unidade", "dezena", "centena", "unidade"};
    int pot[] = {1, 10, 100, 1000};
    scanf("%d",&num);
    bkp = num;
    for(i = 0; i < 4 && num; i++){
    	vals[i] = num % 10;
    	num /= 10;
    }
    i--;
    printf("(%s ordem) %d =", ordens[i], bkp);
    for(j = i; j >= 0; j--){
    	printf(" %d %s",vals[j], nomes[j]);
    	if(vals[j] > 1) printf("s"); 
    	if(j == 3) printf(" de milhar");
    	if( j != 0 ) printf(" +");
    }
    printf(" =");
    for(j = i; j >= 0; j--){
    	printf(" %d",vals[j]*pot[j]);
    	if( j != 0 ) printf(" +");
    }
    printf("\n");
 
	return 0;
 
}