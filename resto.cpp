#include <iostream>

int main (void){
	int valorEmSegundos, horas, minutos, segundos;
	
	printf("Insira o valor em Segundos:");
	scanf("%d", &valorEmSegundos);
	
	horas = valorEmSegundos / 3600;
	minutos = valorEmSegundos % 3600 / 60;
	segundos = valorEmSegundos % 3600 % 60;
	
	printf("Hora: %d /n", horas);
	printf("Minuto: %d /n", minutos);
	printf("Segundo: %d /n", segundos);
	
	
}
