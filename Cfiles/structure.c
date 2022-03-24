#include <stdio.h>

void main(){
	struct student{
		int id;
		char name[20];
		float lang1;
		float lang2;
		float math;
		float comp;
		float eng;
		float avg;
	};
	struct student s[20];
	int i,n;
	printf("Enter the number of records:");
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		printf("Enter student ID:");
		scanf("%d",&s[i].id);
		printf("Enter student NAME:");
		scanf("%s",&s[i].name);
		printf("Enter lang1 marks:");
		scanf("%f",&s[i].lang1);	
		printf("Enter lang2 marks:");
		scanf("%f",&s[i].lang2);
		printf("Enter math marks:");
		scanf("%f",&s[i].math);
		printf("Enter comp marks:");
		scanf("%f",&s[i].comp);
		printf("Enter eng marks:");
		scanf("%f",&s[i].eng);
		s[i].avg = (s[i].lang1 + s[i].lang2 + s[i].math + s[i].comp + s[i].eng)/5;
		
	}
	printf("\n~~~~~~~~STUDENT WITH AVG GREATER THAN 35~~~~~~\n");
	printf("\nID\tName\t\tAvg\t");
	for(i=0;i<n;i++){
		if(s[i].avg>=35){
			printf("\n%d\t%s\t%.2f",s[i].id,s[i].name,s[i].avg);
		}
	}
	printf("\n~~~~~~~~STUDENT WITH AVG LESS THAN 35~~~~~~\n");
	printf("\nID\tName\t\tAvg\t");
	for(i=0;i<n;i++){
		if(s[i].avg<35){
			printf("\n%d\t%s\t%.2f",s[i].id,s[i].name,s[i].avg);
		}
	}	

}
