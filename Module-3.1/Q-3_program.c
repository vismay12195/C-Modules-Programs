// Module 3.1.3 - WAP to find area of circle, rectangle and triangle

#include<stdio.h>
#define PI 3.14

int main(){
	
	// Program to find area of Circle starts from here
	float radius,area_c;
	printf("Enter the radius of circle: ");
	scanf("%f",&radius);
	
	area_c= PI*radius*radius;
	printf("Circle area is: %f\n\n",area_c); 
	
	//Program to find area of Rectangle starts from here
	
	float rw,rl,area_r; // rw= Rectangle width 7 rl= Rectangle length
	printf("Enter the width and length of Rectangle: ");
	scanf("%f %f", &rw, &rl);
	
	area_r= rw*rl;
	printf("Rectangle area is: %f\n\n",area_r);	
	
	//Program to find area of Triangle starts from here

    float tb,th,area_t; // tb= Triangle base & th= Triangle height
	printf("Enter the base and height of triangle: ");
	scanf("%f %f",&tb,&th);
	
	area_t= 0.5*tb*th;
	printf("Triangle area is: %f\n\n",area_t);
	return 0;
}
    
