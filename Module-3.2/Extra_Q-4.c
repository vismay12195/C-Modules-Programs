// Extra Q.4 - Write a program to copy string from one string to another string with user define function.

#include<stdio.h>
#include<string.h>

int main(){
	
	char string[20];
	copy_string(string);
	getch();
	
}

int copy_string(char str[25]){
	char *extra_str[25],copy_str[20];
	printf("Please enter your string: \n");
	gets(str);
	printf("\nString is: %s\n",str);
	strcpy(*extra_str,str);
	printf("New string after copying: %s",strcpy(copy_str,*extra_str));
	getch();
	return copy_string;
}
