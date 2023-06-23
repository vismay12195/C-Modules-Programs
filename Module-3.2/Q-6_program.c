// Module 3.2.6 WAP to print factorial of given number

#include<stdio.h>

int main(){
	int i,n,factorial;
	
	printf("Enter any number to find its Factorial value: \n");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		printf("%d*",i);
		factorial*=i;
	}
	printf("\n\nThe Factorial value is: %d",factorial);
}
