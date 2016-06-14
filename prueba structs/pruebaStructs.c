#include <stdio.h>


struct coordenada {
   int x;
   int y;
  };
  
  
  
 
  
  
  
int main(){
	
	struct coordenada c1;
	struct coordenada* r=&c1 ;

	r->x=33;
	printf("Ingrese la posicion en x: "); 
	scanf("%i",&r->x);
	
	
	
	printf("La coordenada en x es %i",c1.x);
	
	return 0;
	
	}
