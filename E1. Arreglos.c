/*E1. Igualdad de cadenas de texto
	Encontrar los errores asociados al programa que verifica que 2 palabras son iguales, y corregirlos*/
#include<stdio.h>
#include<string.h> //
int main(){ //
	int x=0, band=0;
	char texto[100], texto2[100];
	
	printf("Cadena de texto 1: ");
	scanf("%s", &texto); 
	printf("Cadena de texto 2: ");
	scanf("%s", &texto2);
	
	while (texto[x]!='\0' && texto2[x]!='\0'){
		if(texto[x]!=texto2[x]){
			printf("Las cadenas de texto no son iguales");
			band=1;
			break;
		} 
		x++;	
	}
		if(band==0){
		printf("Las cadenas de texto son iguales");
		}
	return 0;
}


