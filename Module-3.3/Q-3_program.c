// Module 3.3.3 - WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	int len;
	char str[50];
	printf("Enter the string: \n");
	gets(str);
	printf("\nYour string is: %s\n",str);
	len = strlen(str);
	reverse(str,0,len-1);
	printf("\nYour reverse string is: %s",str);
}

void reverse(char str1[], int index, int size){
	char temp;
	temp = str1[index];
	str1[index]=str1[size-index];
	str1[size-index]=temp;
	if(index==size/2){
		return;
	}
	reverse(str1,index+1,size);
}
