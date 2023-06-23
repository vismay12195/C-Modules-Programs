// Extra Q-5 - Write a program to print the Fibonacci series using function
#include<stdio.h>

int main(){
	int n1,n2;
	series(n1,n2);	
}

int series(int n1,int n2){
	n1=0;
	n2=1;
	int n;
	
	while(n<500){
		n=n1+n2;
		
	n1=n2;
	n2=n;

	printf("%d\t",n);
	}	
}
