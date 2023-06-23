// Extra Q.2 - Write a program to find the simple Interest & Compound Interest.

#include<stdio.h>
#include<math.h>

int main(){
	
	float p,r,t,R,si,ci; // si=simple interest & ci=compound interest
	
	printf("Enter your principal amount, rate of interest(percentage value) and time period: \n");
	scanf("%f %f %f",&p,&r,&t);
	
	R = r/100;
	printf("\nYour actual rate of interest is: %.3lf\n",R);
	
	//Simple Interest formula
	si= p*R*t;
	printf("\nSimple Interest value is: %.2lf\n",si);
	
	//Compound Interest formula
	ci=(p*pow((1+R),t))-p;
	printf("Compund Interest value is: %.2lf",ci);
	
	
}
