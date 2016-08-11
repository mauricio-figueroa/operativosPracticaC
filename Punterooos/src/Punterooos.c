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

void mostrarString(char[],int);
void mostrarStringPuntero(char[],int);


int main(void) {


	char string[25];
	string[0]='M';
	string[1]='A';
	string[2]='U';
	string[3]='R';
	string[4]='Y';

	char *apuntadorString;
	*apuntadorString=&string;

	mostrarStringPuntero(apuntadorString,5);


	mostrarString(string,5);


	return 0;

}


void mostrarStringPuntero(char* punteroString[],int cantLetras){

	int i=0;
	for(i=0;i<cantLetras+1;i++){
		printf("%c",*punteroString[i]);
	}


}


void mostrarString(char palabra[],int cantLetras){
	int i=0;

	for(i=0;i<cantLetras+1;i++){
		printf("%c",palabra[i]);
	}
}



