#include "func.h"
/*
int divisivel (int a){
if (a%2)
	return 0;
else
	return 1;
}*/

void main (){
int num_a, num_b;

printf("coloque o numero A :");
scanf("%d", &num_a);

if (divisivel(num_a))
	printf("Divisivel");
else
	printf("Não Divisivel");
}
