/*
 ============================================================================
 Name        : Punterooos.c
 Author      : Mauricio Figueroa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarString(char[], int);
void sumarNumeros(int*, int*);

int main(void) {

	char string[25];
	string[0] = 'M';
	string[1] = 'A';
	string[2] = 'U';
	string[3] = 'R';
	string[4] = 'Y';

	//int *num1 = malloc(sizeof(int));
	//int *num2 = malloc(sizeof(int));

	//*num1 = 4;
	//*num2 = 13;

	//sumarNumeros(num1, num2);

	//mostrarString(string, 5);

	int vector[5];

	llenarVector(vector, 5);

	return 0;

}
void llenarVector(int vector[], int cantPosiciones) {
	int i;
	int num = 0;
	//int *p = malloc(sizeof(int));
	//*p = num;
	for (i = 0; i < cantPosiciones; i++) {
		printf("Ingrese un numero: ");
		scanf("%i", &num);
		vector[i]=num;
	}
	int r;
	int suma=0;
	for (r = 0; r < cantPosiciones; r++) {
		suma+=vector[r];
		printf("Resultado=%i ",suma);

	}


}

void sumarNumeros(int *num1, int*num2) {
	int resultado;
	resultado = *num1 + *num2;
	printf("resultado %i\n", resultado);

}

void mostrarString(char palabra[], int cantLetras) {
	int i = 0;

	for (i = 0; i < cantLetras + 1; i++) {
		printf("%c", palabra[i]);
	}
}

