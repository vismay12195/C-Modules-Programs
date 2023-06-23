// Module 3.2.2 - WAP to swap two numbers without using third variable

#include<stdio.h>

int main(){
	int n1,n2;
	printf("Enter the two numbers n1 and n2: \n");
	scanf("%d %d",&n1,&n2);
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	printf("\nAfter swapping n1=%d and n2=%d",n1,n2);
}


// ------------------METHOD 2---------------------------

//#include<stdio.h>
//
//int main(){
//	
//	int n1,n2;
//	printf("Enter the two numbers n1 and n2: \n");
//	scanf("%d %d",&n1,&n2);
//	
//	printf("\nAfter swapping n1=%d and n2=%d",n2,n1);
//}
