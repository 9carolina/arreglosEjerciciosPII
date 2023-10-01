/*E2. Manipulación de arreglos 
	• Leer (por teclado) y almacenar en un arreglo 5 números enteros
	• Crear un nuevo arreglo (de tamaño 5) con los valores obtenidos previamente multiplicados por 2.
	• Muestre el segundo array.*/
#include<stdio.h>
int main(){
	int num[5], multi[5];
	int i=0, c=0;  
	
	for(i=0;i<5;i++){
		c++;
		printf("Numero %d: ", c);
		scanf("%d", &num[i]);
	}
	for(i=0;i<5;i++){
		multi[i]=num[i]*2;
		printf("%d ", multi[i]);
	}
	
	return 0;
}

