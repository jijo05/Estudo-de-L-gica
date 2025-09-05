#include <iostream>

int main (void){
	int numero, centena, dezena, unidade , soma;
	
	printf("Insira o valor:");
	scanf("%d", &numero);
	
	centena = numero / 100;
	dezena = numero % 100 / 10;
	unidade = numero % 100 % 10;
	
	soma = centena + dezena + unidade;
	printf("Soma: %d /n", soma);
	
	soma = unidade + dezena + dezena;
	printf("Soma: %s /n", soma);
	
	
}
