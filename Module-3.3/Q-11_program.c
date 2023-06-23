// Module 3.3.11 - WAP to show difference between Structure and Union.

#include<stdio.h>
#include<string.h>

union student{
	char name[40];
	double roll;
	float salary;
}s1;

int main(){
	union student s1;
	strcpy(s1.name,"Parth");
	s1.roll=1000001;
	s1.salary=10004932.42;
	printf("your name,roll,salary \n%s \n%f \n.2l%f",s1.name,s1.roll,s1.salary);
}
