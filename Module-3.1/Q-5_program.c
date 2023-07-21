// Module 3.1.5 - WAP to check if the given year is a leap year or not.

#include<stdio.h>

int main(){
	int year;
	
	printf("Please Enter the Year: \n");
	scanf("%d",&year);
	
	if((year%4==0 && year%100!=0) || (year%400==0)){
		printf("\n%d, is a leap year", year);
	}
	
	else{
		printf("\n%d, is not a leap year",year);
	}
}
