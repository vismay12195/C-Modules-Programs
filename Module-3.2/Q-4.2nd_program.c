// // Module 3.2.4 - WAP to show
// 1. Monday to Sunday using switch case
// 2. Vowel or Consonant using switch case


// 2. Program for Vowel or Consonant using switch case

#include<stdio.h>
#include<string.h>

int main(){
	char letter;
	
	printf("Please enter the letter to check whether it is VOWEL or CONSONANT: \n");
	scanf("%s", &letter);	
	
	switch(letter){
		
		case 'A':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'a':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'E':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'e':
								   printf("\nThe letter is VOWEL");
								   break;
		
		case 'I':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'i':
								   printf("\nThe letter is VOWEL");
								   break;
		
		case 'O':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'o':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'U':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		case 'u':
								   printf("\nThe letter is VOWEL");
								   break;
								   
		default: 
				printf("\nThe letter is CONSONANT");
				break;
		
	}
	
}

