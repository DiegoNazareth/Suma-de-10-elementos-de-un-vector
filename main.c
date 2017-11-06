  //suma de 10 elementos de un arreglo 
#include<stdio.h>
#include<stdlib.h>

int main(){
	int vector[10], i, suma=0;
	printf("Dame 10 valores para guardar en el vector\n");
	for(i=0;i<10;i++){
		scanf("%d", &vector[i]);
		suma=suma+vector[i];
	}
	printf("Suma del vector es:%d\n", suma);
	
	return(0);
}
