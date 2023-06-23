// Module 3.3.10 - Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>
#include<string.h>

//Defining a Structure of Employee Details
struct employee{
	int empno,age;
	char empname[50],address[50];
}e[5];//Creating an array of employees

main(){
	
	int i;
	
	for(i=1;i<=5;i++){
		printf("Enter the Employee no.: \n");
		scanf("%d",&e[i].empno);
		
		printf("Enter the Employee name: \n");
		scanf("%s",&e[i].empname);	
	
		printf("Enter the Employee address: \n");
		scanf("%s",&e[i].address);
		
		printf("Enter the Employee age: \n");
		scanf("%d",&e[i].age);
		
		//Printing all the details
		printf("Employee%d details are as below:\n\n\t Employee No.: %d \n\t Employee Name: %s \n\t Employee Address: %s \n\t Employee Age: %d \n\n",i,e[i].empno,e[i].empname,e[i].address,e[i].age);
			
	}
	
	return 0;
}
