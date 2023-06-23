// Module 3.3.7 - WAP Find out length of string without using inbuilt function

#include<stdio.h>
#include<string.h>

int main(){
	char str[30];
	int s_len=0;
	
	printf("Enter your string: \n");
	scanf("%s",&str);
	
	//Condition to find the length is = Until the string's value is '\0'
	while(str[s_len]!='\0'){
		s_len++;
		
	}
	printf("String Length is: %d",s_len);
}

//=============================METHOD 2=====================================

//#include<stdio.h>
//#include<string.h>
//int main(){
//
//	char str[30];
//	int s_len=0;
//	
//	printf("Enter your string: \n");
//	scanf("%s",&str);
//
////Using do-while loop to find the length of the string	
//	do{
//		s_len++;
//	}
//	while(str[s_len]!='\0');
//	
//	printf("String Length is: %d",s_len);
//}

//===================METHOD 3==============================

//#include<stdio.h>
//#include<string.h>
//int main(){
//
//	char str[30];
//	int s_len=0;
//	
//	printf("Enter your string: \n");
//	scanf("%s",&str);
//
////Using for loop to find the length of the string
//
//	for(s_len=0;str[s_len]!='\0';s_len++){
//	}
//	printf("String Length is: %d",s_len);
//}

//============================METHOD 4 ================================

//#include<stdio.h>
//#include<string.h>
//int main(){
//
//	char str[30];
//	int s_len=0,i;
//	
//	printf("Enter your string: \n");
//	scanf("%s",&str);
//	
//// Using the combination of for and if loop
//	for(i=s_len;i<str[s_len];i++){
//		
//		if(str[s_len]!='\0'){
//		s_len+=1;		
//	}
//	}	
//	
//	printf("String length is: %d",s_len);
//}
	

