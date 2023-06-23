// Module 3.2.9 - Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
#define Max(a,b) (a>b?a:b)


int Max_digit(int num){
	int largest_digit=0, digit;
	while(num){
		digit=num%10;
		largest_digit= Max(digit, largest_digit);5
		num = num/10;
	}
	printf("Max digit value is: %d",largest_digit);
}

int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	Max_digit(num);
	return 0;
	
}
