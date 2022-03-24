#include <stdio.h>
int main(){
	int n,first,last,mid,key;
	printf("\nenter the no of integer in array: ");
	scanf("%d",&n);
	int arry[n];
	printf("\nenter the values of array: ");
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
	printf("sorted elements are:\n");
	for(int l = 0; l < n; l++){
		printf("%d \n",arry[l]);
	}
	first = 0;
	last = n-1;	
	printf("enter key element: ");
	scanf("%d",&key);
	while(first <= last){
		mid = (first+last)/2;
		if(key == arry[mid]){
			printf("element found at position %d",mid+1);
			return 1;
		}else if(key < arry[mid]){
			last = mid - 1;
		}else
			first = mid + 1;
		}
			
	}
	printf("element %d not found",key);
	return 0;
}



