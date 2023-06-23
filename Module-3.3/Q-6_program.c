// Module 3.3.6 - WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array


#include<stdio.h>

int main(){
	int i,j,size;
	
	printf("How many rows and columns in both array?: \n");
	scanf("%d",&size);	
	
	int A[size][size];
	printf("\n\nenter A array elements: \n");
	
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
	
	printf("A array is: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	int B[size][size];
	printf("enter B array elements: \n");
	
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			scanf("%d",&B[i][j]);
		}
	}
	printf("\n");
	
	printf("B array is: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	int sum[size][size], sub[size][size], mul[size][size];
	
	printf("Summation array is: \n");
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			sum[i][j]=A[i][j]+B[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("Subtraction array is: \n");
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			sub[i][j]=A[i][j]-B[i][j];
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("Multiplication array is: \n");
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			
			mul[i][j]=A[i][j]*B[i][j];
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	
	system("pause");	
	
}
