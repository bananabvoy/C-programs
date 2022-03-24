#include <stdio.h>

int main(void){
	int n;
	printf("enter the no of integer you want to sort: ");
	scanf("%d",&n);
	int arry[n];
	printf("\n enter the values: ");
	for(int i = 0; i < n; i++){
		scanf("%d",&arry[i]);
	}
	for(int j = 0;j < n-1; j++){
		for(int k = 0; k < n-1-j ; k++){
			if(arry[k]>arry[k+1]){
				int temp = arry[k];
				arry[k] = arry[k+1];
				arry[k+1] = temp;
			}
		}
	}
	for(int l = 0; l < n; l++){
		printf("%d \n",arry[l]);
	}
}
