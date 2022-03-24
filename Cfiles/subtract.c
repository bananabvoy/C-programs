#include <stdio.h>

int main(){
	int num1,num2,dif;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\tsubtraction machine\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Enter two numbers you want to subtract: ");
	scanf("%d%d",&num1,&num2);
	printf("the subtraction of the two number is ");
	dif = num1 - num2;
	printf("%d\n",dif);
	return 0;
}
