/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int i;
	int suma=0;
	int promedio=5;
	for(i=0;i<5;i++){
		printf("ingrese numero:");
		scanf("%d",&numero);
		suma=suma+numero;

	}
	printf("El promedio de los numeros ingresados es: %d", suma/promedio);



	return 0;
}
