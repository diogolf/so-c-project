#include "ex14.h"

void main(){
char str[100];
printf("Escreva texto :");
//fgets (str,100,stdin);
scanf ("%[^\n]",str);
printf("%s\n",str);

}
