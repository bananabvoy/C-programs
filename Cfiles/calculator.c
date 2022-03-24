/*
Expt NO.1
Question: Simulation of a simple calculator
Name:Sangham
RNo:N-10
Date:30.12.21
*/
#include <stdio.h>
int main(){
	int num1,num2,result;
	char op;
	printf("\nEnter the operator ");
	scanf("%c",&op);
	printf("\nEnter two Numbers ");
	scanf("%d%d",&num1,&num2);
	if (op == '+'){
	result = num1+num2;
	}
	else if (op == '-'){
	result = num1-num2;
	}
	else if (op == '*'){
	result = num1*num2;
	}
	else if (op == '/'){
		if(num2 == 0){
			printf("DENOMINATOR CAN'T BE 0");
			return 1;
		}
		else{
			result = num1/num2;
		}
	}
	else if (op == '%'){
		if(num2 == 0){
			printf("DENOMINATOR CAN'T BE 0");
			return 1;
		}
		else{
			result = num1%num2;
		}
	}
	else{
		printf("Invalid operator choice");
		return 1;
	}
	printf("%d %c %d = %d\n",num1,op,num2,result);
	return 0;
}
