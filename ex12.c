#include "ex12.h"

void imprime_floats (float v[],int dim){
	for (int i=dim-1; i>=0; i --)
		printf("%2.2f --> ",v[i]);
}

void main (){
int vector[10];
float vector_f[10];
char var[10];

	for (int i=0; i<10; i++){
		printf("Põe um numero -->");
		fgets (var,10,stdin);
		vector[i] = atoi(var);
	}

	for (int i=0; i<10; i++){
		vector_f[i] = vector[i] * 0.25;
	}

imprime_floats (vector_f,10);

}
