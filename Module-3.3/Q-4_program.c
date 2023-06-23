// Module 3.3.4 - WAP to find factorial using recursion

#include<stdio.h>
int main(){
	int n,factorial;
	printf("Enter the number: \n");
	scanf("%d",&n);
	factorial=fact(n);	
	printf("\nThe factorial value of %d is: %d",n,factorial);
	
}

int fact(int n){
	
	if(n==0 || n==1){
		return 1;
	}
	else{
		return(n*fact(n-1));
	
	}
	
}
