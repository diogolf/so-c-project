#include <stdio.h>
#include <string.h>
int x=0; 					// Variável GLOBAL, para mostragem e crontole do nº ciclos
void main (){
	int vetor[100];
	int N=1, aux =0, init=0,fim=0;
	printf("\n 		# Sequência Fibonacci # ");
	while (N!=0){
		
		printf("\n\n 			N ciclos: ");
		scanf("%d",&N); 				// N , variavel recebe numero de ciclos
		if (N != 0){
			fim = N + fim; 				// fim é variavel incremental e de controle
			for (x=init; x<fim; x++){ 		// init e fim fazem o principio e fim do ciclo
				if (x==0){
					vetor[x] = x; 		// Posição vetor[0], recebe valor 0
					printf ("Ciclo :%d ",x); printf ("Fib : %d \n",vetor[x]);		   
				}				// Print do nº ciclo + valor do vector[x]
				if (x==1){
					vetor[x] = x;		// Posição vetor[1], recebe valor 0
					printf ("Ciclo :%d ",x); printf ("Fib : %d \n",vetor[x]);
				}				// Print do nº ciclo + valor do vector[x]
				if (x>=2){				
					vetor[x] = vetor[x-1] + vetor[x-2]; // Soma os 2 val. anteriores, e atribui o valor do vetor[x]
					printf ("Ciclo :%d ",x); printf ("Fib : %d \n",vetor[x]);
				}				// Print do nº ciclo + valor do vector[x]
			}
			printf("\n\n ");
			for (aux = init; aux < x ; aux ++){
				printf (" - %d",vetor[aux]); 	// Print de todas as posições do vector	
			}
			
		}else{
			printf("\n\n ");
			for (aux = init; aux < x ; aux ++){
				printf (" - %d",vetor[aux]);	// Print de todas as posições do vector	
			}
		}
	}
	printf("\n\n");
}
