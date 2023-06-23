// Module 3.2.4 - WAP to show
// 1. Monday to Sunday using switch case
// 2. Vowel or Consonant using switch case


// 1. Program for showing Monday to Sunday using switch case

#include<stdio.h>
#include<string.h>

int main(){
	
	int day;
	
	do{
		
		
	printf("================DAY OF THE WEEK==================\n\n\n");
	
	printf("Enter the number of day from 1 to 7 of the week: \n");
	scanf("%d", &day);
	
	switch(day){
		
		case 1: printf("Monday\n\n");
				break;
		case 2: printf("Tuesday\n\n");
				break;
		case 3: printf("Wednesday\n\n");
				break;
		case 4: printf("Thursday\n\n");
				break;
		case 5: printf("Friday\n\n");
				break;
		case 6: printf("Saturday\n\n");
				break;
		case 7: printf("Sunday\n\n");
				break;
				
		default: printf("Please enter the number from 1 to 7\n\n");
				 system("pause");
				 break;
	}
}
	while(day<8);
	
}





