// Extra Q-7 - Write a program to concatenate the two string using pointer.

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	char str1[50],str2[50];
	int *p1,*p2;
	
	printf("Enter the String1: \n");
	gets(str1);
	printf("\nString1 is:%s",str1);
	printf("\nEnter the String2: \n");
	gets(str2);
	printf("\nString2 is:%s",str2);
	
	p1=&str1;
	p2=&str2;
	
//	printf("p1 address value is: %d",p1);
//	printf("p1 address value is: %d",p1);
	
	printf("\n\nValue of string in pointer p1 is: %s",p1);
	printf("\n\nValue of string in pointer p2 is: %s",p2);
	
	printf("\n\nThe Concated string will be: %s",strcat(p1,p2));
	
}

