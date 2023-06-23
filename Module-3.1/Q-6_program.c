// Module 3.1.6 - WAP to convert years into days and days into years

#include<stdio.h>

int main(){
	int days,leap_year=0,i;
	int years,divisor=4,quotient;// defining divisor=4 in order to create a counter for no. of leap_year out entered years
	
	printf("Enter the number of years: \n");
	scanf("%d",&years);
		
		if(years%4==0){
			
		quotient=years/divisor;
		leap_year=leap_year+quotient; 
		days = years*365 + leap_year;	
			 		
		printf("Out of %d years, there are %d leap years\n",years,quotient);
		printf("Total days are : %d\n\n\n",days);
	}
	
		else{
			
		quotient=years/divisor;
		leap_year=leap_year+quotient;
		days= years*365 + leap_year;
		
		printf("Out of %d years, there are %d leap years\n",years,quotient);
		printf("Your total days are: %d\n\n\n",days);
	}
	
	// Now converting days into years and months as well program
	
	float f_years; // f_years= float_years
	float months; // To convert the f_years to an equivalent number of months  
	
	printf("Enter the total number of days for converting into years: \n");
	scanf("%d",&days);
	
	f_years = (float)days/365;
	printf("Total years would be: %.3lf\n",f_years);
	
	months = ((float)days/30)*0.987;// 0.987 is a number that helps in adjusting the variation in the 30 or 31 days of month and provides quite close result
	printf("Which is nearly equivalent to the %.2lf number of months",months);
	
	
	
	}
