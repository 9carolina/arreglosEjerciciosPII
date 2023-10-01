/*E3. Longitud de la cadena de texto 
	Escribir en lenguaje C un programa que, dado una cadena de texto introducida por teclado, 
	el programa encuentre el número de caracteres de dicha cadena.
	Nota: Introducir la cadena de texto sin espacios*/
#include<stdio.h>
#include<string.h>
int main(){
	char texto[100]; //1 texto y 100 caracteres
	int i=0;  //contador de numero de caracteres de la cadena, comenzando en 0
	
	printf("Ingrese su texto (sin espacios): ");
	scanf("%s", &texto);    //se guarda en variable de tipo string %s y en variable texto (sin[])
	
	while(texto[i]!='\0'){  //el bucle imprimirá letra por letra del texto 
		i++;  				//hasta alcanzar el carácter nulo
		printf("letra: %c\n", texto[i-1]);
	}
	printf("\nNumero de caracteres: %d", i); //muestra el numero total de caracteres
	
	return 0;
}

