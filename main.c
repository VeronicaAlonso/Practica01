#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int vect[5];
	int buscado,mitad;
	bool band=false;
	int i,j,aux;
	printf("Numeros aleatorios del 1 al 10\n\n");
	srand(time(NULL));
	for (int i = 0; i < 5; i ++){
		vect[i] =1+rand()%((10+1)-1);
		printf("[%i]",vect[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(vect[j]>vect[j+1]){
				aux=vect[j];
				vect[j]=vect[j+1];
				vect[j+1]=aux;
			}
		}
	}
	printf("El orden es:");
	for(i=0;i<5;i++){
		printf("[%i]",vect[i+1]);
	}printf("\n\n");

	printf("Ingresa el numero que deseas buscar\n\n");
	scanf("%i",&buscado);
	int inf=0, sup=5;
	while (inf<=sup){
		mitad=(inf+sup)/2;
		if(vect[mitad]==buscado){
			band=true;
			break;
		}
		if(vect[mitad]<buscado){
			inf=mitad;
			mitad=(inf+sup)/2;
		}		
		if(vect[mitad]>buscado){
			sup=mitad;
			mitad=(inf+sup)/2;
		}}
		if(band==false){
		printf("El numero no existe\n");	
		}
	else if(band==true){
		printf("Encontrado en la posicion [%i]",mitad);
	}
}
