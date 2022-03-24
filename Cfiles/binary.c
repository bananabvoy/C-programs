#include <stdio.h>

int btod(int bin);

void main()
{
	int binary,dec;
	printf("Enter the binary number you want to convert: ");
	scanf("%d",&binary);
	dec = btod(binary);
	printf("\n(%d)₂=(%d)₁₀\n",binary,dec);
}

int btod(int bin){
	if(bin == 0){
		return 0;
	}else{
		return (btod(bin/10)*2+(bin%10));
	}
}

/*
1010=10
1001=9
1111=15
*/
