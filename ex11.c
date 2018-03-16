#include "ex11.h"

void print_vector(int v[],int dim){
	for (int i=dim-1; i>=0; i --)
		printf("%d --> ",v[i]);
}

void main (){
int numeros[10],i;
char nome [10];
	for (i=0; i<10; i++){
		printf(" Mete um numero -->");
		fgets (nome,10,stdin);
		numeros [i] = atoi(nome);
	}

print_vector (numeros,10);
}
