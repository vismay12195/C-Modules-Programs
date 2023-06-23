// Module 3.1.1 - Display this information using printf
// 					1. Your name  
// 					2. Your Birthdate
//					3. Your Age
// 					4. Your Address

#include<stdio.h>
#include<string.h>

main(){
	//Taking Variables for name, address, birthdate and age.
	char _name[10], _address[15];
	int b_date, _age;
	
	// Getting details First
	printf("Enter your name: \n");
	scanf("%s",&_name);
	
	printf("Enter your address: \n");
	scanf("%s",&_address);
	
	printf("Enter your birthdate: \n");
	scanf("%d",&b_date);
	
	printf("Enter your age: \n");	
	scanf("%d",&_age);
	
	
	//Printing all the details
	printf("Your details are as below:\n\n\t Name: %s \n\t Birthdate: %d \n\t Age: %d \n\t Address: %s \n\t",_name,b_date,_age,_address);
	return 0;
}


// ------------METHOD-2------------------

//#include<stdio.h>
//
//int main(){
//	
//	printf("First Name: Vismay \n");
//	printf("Last Name: Modi \n");
//	printf("Birthday: 12th January, 1995 \n");
//	printf("Age: 28 \n"); 
//	printf("Address: Gotri, Vadodara \n");
//	
//	return 0;
//}
