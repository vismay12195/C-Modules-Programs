// Extra Q.2 - Write a program user enter the 5 subjects mark. You have to make a total and
//find the percentage.
//a) percentage > 75 you have to print “Distinction”
//b) percentage > 60 and percentage <= 75 you have to print “First class”
//c) percentage >50 and percentage <= 60 you have to print “Second class”
//d) percentage > 35 and percentage <= 50 you have to print “Pass class”
//e) Otherwise print “Fail”

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float s1_m,s2_m,s3_m,s4_m,s5_m,result,subjects=5;
	
	printf("Enter the marks of 5 subjects: \n");
	scanf("%f %f %f %f %f",&s1_m,&s2_m,&s3_m,&s4_m,&s5_m);
	
	
	result = (s1_m+s2_m+s3_m+s4_m+s5_m)/subjects;
	printf("Your percentage is: %.2lf\n\n",result);
	
	if(s1_m<33 || s2_m<33 || s3_m<33 || s4_m<33 || s5_m<33){
		printf("Can't continue further because you have already failed in one subject\n");
		exit(0);
	}
	
	if(result>75){
		printf("Distinction");
	}
	
	else if(result>60 && result<=75){
		printf("First Class");
	}
	
	else if(result>50 && result<=60){
		printf("Second Class");
	}
	
	else if(result>35 && result<=50){
		printf("Pass Class");
	}
	
	else{
		printf("Fail");
	}
}
