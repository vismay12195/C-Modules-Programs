// Module 3.3.9 - Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>
#include<string.h>

//Defining a Structure of Employee Details
struct employee{
	int empno,age;
	char empname[50],address[50];
}e1;

main(){
	
	printf("Enter the Employee no.: \n");
	scanf("%d",&e1.empno);
	
	printf("Enter the Employee name: \n");
	scanf("%s",&e1.empname);	

	printf("Enter the Employee address: \n");
	scanf("%s",&e1.address);
	
	printf("Enter the Employee age: \n");
	scanf("%d",&e1.age);
	
	//Printing all the details
	printf("Your details are as below:\n\n\t Employee No.: %d \n\t Employee Name: %s \n\t Employee Address: %s \n\t Employee Age: %d \n\t",e1.empno,e1.empname,e1.address,e1.age);
	return 0;
}
