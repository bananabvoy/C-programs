 
#include<stdio.h>

int main(){
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q;
	int i,j,k;
	printf("enter the size of matrix A:");
	scanf("%d%d",&m,&n);
	printf("Enter the order of matrix B:");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("Multiplication of matrices not possible\n");
		return -1;
	}

	printf("\nEnter elements into matrix A: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}	
	printf("\nEnter elements into matrix B: ");
	for (i=0;i<p;i++){
		for (j=0;j<q;j++){ 
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			c[i][j] = 0;
			for(k=0;k<n;k++){
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	printf("\n matrix A is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n matrix B is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe product matrix is \n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
