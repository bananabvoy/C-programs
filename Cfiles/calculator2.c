#include <stdio.h>
int main()
{
	int num1,num2,result;
	char op;
	do{
		printf("\n~~~~~~~~~~~~~~~~~~~~~~CALCULATOR~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nEnter the operator you wanna proceed with: ");
		scanf(" %c",&op);
		printf("\nEnter two Numbers you want to operate on with a space: ");
		scanf("%d%d",&num1,&num2);
		if (op == '+'){
			result = num1+num2;
			printf("\nThe Addition of the Two number is: %d",result);
		}
		else if (op == '-'){
			result = num1-num2;
			printf("\nThe Subraction of the Two number is: %d",result);
		}
		else if (op == '*'){
			result = num1*num2;
			printf("\nThe Multiplication of the Two number is: %d",result);
		}
		else if (op == '/'){
			if(num2 == 0){
				printf("NUMERATOR CAN'T BE 0");
			}
			else{
				result = num1/num2;
				printf("The division of the Two number is: %d",result);
			}
		}
		else if(op == '%'){
			if(num2 == 0){
				printf("NUMERATOR CAN'T BE 0");
			}
			else{
				result = num1%num2;
				printf("The division of the Two number is: %d",result);
			}
		}
		else if(op == 'E'){
			break;	
		}
		else{
			printf("\nINVALID CHOICE");
		}
		printf("\nTO EXIT CALCULATOR PUT OPERATOR E");
	}while(op != '+' || op != '-' || op != '/' || op != '*');
	return 0;
}

