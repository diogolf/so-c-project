#include <stdio.h>

void swap (int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

void main(void){

int num1 = 100, num2 = 200;
printf("%d - %d \n",num1,num2);
swap (&num1, &num2);
printf("%d - %d \n",num1,num2);

}
