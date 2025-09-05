#include <stdio.h>


int main (void){
	int numero, centena, dezena, unidade , inverso;
	char string[centena], [dezena], [unidade];
	
	printf("Insira o valor:");
	scanf("%d", &numero);
	
	centena = numero / 100;
	dezena = numero % 100 / 10;
	unidade = numero % 100 % 10;
	
	sprintf(centena, dezena, unidade);
	inverso = unidade + dezena + centena;
	printf("Inverso: %d /n", inverso);
	
	
}
