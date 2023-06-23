// Module 3.2.10 - Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>

//Defining the function to perform summation of given number's digits
int digit_sum(int num){
	int digit,sum_digit=0;
	
	while(num){
		digit=num%10;
		sum_digit = sum_digit + digit;
		num = num/10;
	}
	
	printf("The summation of individual digits: %d",sum_digit);
}

int main(){
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);
	digit_sum(num); // Calling the function
	return 0;
}


