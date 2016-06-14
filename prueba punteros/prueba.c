#include <stdio.h>

int factorial(int );

//Crear un programa C que lea cantidades y precios y al final indique el total de la factura. 
void ingresarProducto(double *precio,int *cantidad);


int main(){
   
   double total;
   double precio;
   int cantidad;
   
 
   int r=1;
   
   
	
	
	while(1){
		
		
		
		ingresarProducto(&precio,&cantidad);

		
		printf("Desea ingresar un nuevo Producto 1=si N=NO: " );
		
		scanf("%i",&r);
		
		total=	total+(precio*cantidad);
		
		
		
		
		if(r==0){
			break;}
			
			
		}
		
		
		printf("El total es %lf :",total);
		
		
return 0;
}

void ingresarProducto(double *precio,int *cantidad){
	printf("ingrese el precio unitario del producto: ");
 	scanf("%lf",precio);
 	printf("ingrese la cantidad de unidades que compro del producto: ");
	scanf("%i",cantidad);
 		
	}



