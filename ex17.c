#include "ex17.h"

void main (){

char *ap;
int num = 40;
ap = (char*) malloc (num * sizeof(char));
printf("Palavra -> ");
//scanf("%s",ap);
fgets(ap,40,stdin);
printf("%s",ap);

}

