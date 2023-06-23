// Module 3.1.4 - WAP to find simple interest

#include<stdio.h>

int main()
{
	float p,r,t,si; // where p=Principal amount, r=rate, t= time
	printf("Enter the principal, rate and duration: \n");
	scanf("%f %f %f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("Simple Interest is: %f",si);
}
