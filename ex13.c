#include "ex13.h"

void main (){

char str[50];

printf("Introduza uma palavra :");
scanf("%[^\n]", str);
int fim = strlen(str);

	for (int i=fim-1;i>=0;i--)
		printf("%c",str[i]);
	printf("\n");
}

