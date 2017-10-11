#include<stdio.h>
#include<stdlib.h>

int main(){
	int vect[21];
	int aux=0,otro=0;
	for(int i=0;i<21;i++){
		printf("Ingresa un numero\n");
		scanf("%i",&vect[i]);
}
	for(int z=0;z<22;z++){
		for(int y=0;y<22;y++){
			if(vect[y]>vect[z]){
				aux=vect[y];
				vect[y]=vect[z];
				vect[z]=aux;
			
			}
		}
	}
		for(int i=0;i<22;i++){
		printf("[%i]",vect[i]);}
}
