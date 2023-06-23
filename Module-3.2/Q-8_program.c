// Module 3.2.8 - WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746


#include<stdio.h>

//Creating a Function that would breakdown the number and return the new number
int reverse_num(int num){
	
	int rev_num=0;
	while(num>0){
		rev_num=rev_num*10 + num%10;
		num=num / 10;
	}
	return rev_num;
}

//Entering the number first and then calling the defined function as above to print it in reverse order

int main(){
	
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);
	printf("Reversed number would be: %d",reverse_num(num));
}
