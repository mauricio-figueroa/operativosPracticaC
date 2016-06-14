#include <stdio.h>

struct casa{
	int idCasa;
	int cantIntegrantes;
	int ingresoTotal;
	};

struct nodoCasa{
	struct casa casaActual;
	struct nodoCasa* siguiente;	
	};
	
int main(){
	
	

	
	
	struct casa casa1;
	casa1.idCasa=123;
	casa1.cantIntegrantes=5;
	casa1.ingresoTotal=2343;
	
	struct casa casa2;
	casa2.idCasa=124;
	casa2.cantIntegrantes=3;
	casa2.ingresoTotal=32145;
	
	
	
	struct nodoCasa nodo2;
	nodo2.casaActual=casa2;
	nodo2.siguiente=NULL;
	

	struct nodoCasa nodo1;
	nodo1.casaActual=casa1;
	nodo1.siguiente=&nodo2;
	
	
	

	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	struct nodoCasa* nodoActual=&nodo1;
	
	while(nodoActual->siguiente!=NULL)
	printf("ID casa %i :",nodoActual->casaActual.idCasa);
	
	
	nodoActual=nodoActual->siguiente;
	
	return 0;
		
	}

