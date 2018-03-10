#include <stdio.h>
#include <string.h>

void main (){
char str1 [100],str2 [100],str3 [100],str4 [100],str[100];
int var = 0;
int *var_pointer;

/*printf("Digite o seu nome :");
fgets(str1,100,stdin);
printf("Digite o seu nome ");
fgets(str2,100,stdin);
printf("Digite o seu nome ");
fgets(str3,100,stdin);
printf("Digite o seu nome ");
fgets(str4,100,stdin);
strcat(str1,str2);
strcat(str1,str3);
strcat(str1,str4);
printf(str1,"\n");*/
printf("\n %d",var);
var = 1;
var_pointer = &var;
printf("\n %d",*var_pointer);
printf("\n %p",var_pointer);
*var_pointer = 100;
printf("\n %d",var);
}
