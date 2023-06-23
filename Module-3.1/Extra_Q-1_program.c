// Extra Q.1 - Write a program to make a square and cube of number.

#include<stdio.h>
#include<math.h>

int main(){
	int num,square_num,cube_num;
	printf("Please enter the number: \n");
	scanf("%d",&num);
	
	square_num = num*num;
	printf("\nThe square of entered number is = %d\n\n",square_num);
	
	cube_num = num*num*num;
	printf("The cube of entered number is = %d",cube_num); 
	
}

//=====================METHOD 2====================================
//#include<stdio.h>
//#include<math.h>
//int main(){
//	
//	int num,square_num,cube_num;
//	printf("Please enter the number: \n");
//	scanf("%d",&num);
//	
//	//Using pow() function to get the square and cube of the number
//	square_num = pow(num,2);
//	printf("\nThe square of entered number is = %d\n\n",square_num);
//	
//	cube_num = pow(num,3);
//	printf("The cube of entered number is = %d",cube_num); 
//}
