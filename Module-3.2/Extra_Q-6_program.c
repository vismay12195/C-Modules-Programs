// Extra Q.6 - Write program to make an addition of two number using pointer

#include<stdio.h>


int main(){
	int *n1,*n2,num_1,num_2,sum;
	printf("Enter the two numbers: \n");
	scanf("%d %d",&num_1,&num_2);
	
	n1=&num_1;
	n2=&num_2;
	
	sum=*n1+*n2;
	printf("The addition value is: %d",sum);
}
