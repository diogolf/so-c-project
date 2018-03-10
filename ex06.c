#include "ex06.h"

int resto(int num_a,int num_b){
if (num_a % num_b)
	return 0;
else	
	return 1;

}

void main (){
int num_a, num_b;
printf("Introduza o numero A : ");
scanf("%d", &num_a);
printf("Introduza o numero B : ");
scanf("%d", &num_b);

if (resto(num_a,num_b))
	printf("\n Resto == 0 \n");
else
	printf("\n Resto != 0 \n");
}
