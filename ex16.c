#include "ex16.h"

void main (){
int i;
char palavra_final[50], palavra[50];

for (i=0;i<4;i++){
	printf("Coloque uma palavra : ");
	scanf("%s",palavra);
	//fgets(palavra,100,stdin);
	strcat(palavra_final,palavra);
}
printf("%s",palavra_final);
}
