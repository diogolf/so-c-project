#include <stdio.h>

void le_vetor(int *vet, int dim){
	
printf ("%d\n",*vet);
}


void main (){
int vetor[10];
for (int x=0; x <10; x++)
	vetor[x] = x+100;

int tam = sizeof(vetor) /4;
for (int x=0; x <10; x++)
le_vetor(&vetor[x],tam);


}
