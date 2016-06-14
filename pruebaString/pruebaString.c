#include <stdio.h>




int main(){
	
	
	
	int n;
	printf("ingrese cantidad de letras de su palabra: ");
	scanf("%i",&n);
	char string[n];
	
	int t=0;
	int r;
	int l=n-1;
	char b;
	
	while(t<l){
		r=t+1;
		printf("Ingrese letra posicion %i de su palabra: ",r);
		scanf("%c",&b);
		string[t]=b;
		t++;
	}
	
	printf(string);
	
	
	return 0;
	
	}
