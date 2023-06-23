// Module 3.2.3 - WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Please enter the number to check whether it is an ODD or EVEN: \n");
	scanf("%d",&n);
	
	(n%2==0) ? printf("\n%d is EVEN",n) : printf("\n%d is ODD",n); // Ternary Operator 'condition ? value_if_true : value_if_false'
}



// ======================METHOD 2===========================

//#include<stdio.h>
//
//int main(){
//	
//	int n;
//	
//	printf("Please enter the number to check whether it is an ODD or EVEN: \n");
//	scanf("%d",&n);
//	
//	if(n%2==0){
//		printf("\nThe number is EVEN");
//	}
//	else{
//		printf("\nThe number is ODD");
//	}
//}
