#include "ex21.h"
int x;
struct Alunos vetor_alunos[4];

void imprime(){
for (x=0;x<4;x++){		
		printf("\n Aluno %d : %s %d %s %s %s \n",x+1,vetor_alunos[x].nome,vetor_alunos[x].idade,vetor_alunos[x].universidade,vetor_alunos[x].curso,vetor_alunos[x].ano_frequencia);
	}
}

void main(){
	for (x=0;x<4;x++){
	printf("Nome : ");
	scanf(" %[^\n]s",vetor_alunos[x].nome);
	printf("Idade : ");
	scanf(" %d",&vetor_alunos[x].idade);
	printf("Universidade : ");
	scanf(" %[^\n]s",vetor_alunos[x].universidade);
	printf("Curso : ");
	scanf(" %[^\n]s",vetor_alunos[x].curso);
	printf("Ano que frequenta : ");
	scanf(" %[^\n]s",vetor_alunos[x].ano_frequencia);
	printf("\n");
	}
printf("\n ## Imprimir Alunos ##");
imprime();
}
