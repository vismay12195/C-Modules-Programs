// Module 3.2.11 - Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include<stdio.h>

int main(){
	
	int first_digit,last_digit,num,sum;
	
	printf("Enter the number: \n");
	scanf("%d",&num);
	
	last_digit = num%10;
	
	while(num>=10){
		num = num/10;
	}
	first_digit = num;
	
	sum= first_digit + last_digit;
	
	printf("Summation of first and last digit is: %d",sum);
	
}
