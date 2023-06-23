// Module 3.1.2 - Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>

int main(){
	
	int option;	
	
	do{
	
	printf("\t\t\t=====SIMPLE CALCULATOR PROGRAM=====");
		printf("\n\n\n\t\t\t     1.ADDITION\n");
		printf("\t\t\t     2.SUBTRACTION\n");
		printf("\t\t\t     3.MULTIPLICATION\n");
		printf("\t\t\t     4.DIVISION\n");
		printf("\t\t\t     5.MODULO\n");
		printf("\t\t\t     6.EXIT\n");
		printf("\t\t\t    ___________________\n\n\n\n");
		
	printf("Select your option: \n");
	scanf("%d",&option);
	
	switch(option){		
		
		case 1:
				printf("You have selected ADDITION\n\n");
				int v,sum=0,i,n; //here n= how many numbers you would like to add
				printf("How many numbers would you like to add?: \n");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					printf("Enter the number%d: \n",i);
					scanf("%d", &v);
					
			// If number is negative then the loop would break
						if(v<0){
							break;
						}				
					sum += v;
				}
				printf("Your Addition total is: %d\n\n\n", sum);
				break;
				
		case 2: 
				printf("You have selected SUBTRACTION \n");
				int sub=0;
				printf("How many numbers would you like to subtract?: \n");
				scanf("%d",&n);
				
				for(i=1;i<=1;i++){
					printf("Enter the number%d: \n",i);
					scanf("%d",&v);
					
					sub+=v;
						for(i=2;i<=n;i++){
							printf("Enter the number%d: \n",i);
							scanf("%d",&v);
							
							sub-=v;
						}
				}
				printf("Your subtraction total is: %d\n\n\n",sub);
				break;
				
		case 3:
				printf("You have selected MULTIPLICATION \n");
				int mul=1;
				printf("How many numbers would you like to multiply?: \n");
				scanf("%d", &n);
				
				for(i=1;i<=n;i++){
					printf("Enter the number%d: \n",i);
					scanf("%d",&v);

					mul*=v;
					
				}
				printf("Your multiplication total is: %d\n\n\n",mul);
				break;
				
		case 4:
				printf("You have selected DIVISION \n");
				float div;
				
				printf("How many number would you like to divide?: \n");
				scanf("%d",&n);
				
				for(i=1;i<=1;i++){
					printf("Enter the number%d: \n",i);
					scanf("%d",&v);
					
					div=(float)v;// Storing the number1 value in div
					
						for(i=2;i<=n;i++){
							printf("Enter the number%d: \n",i);
							scanf("%d",&v);
							
							div/=(float)v; //here number1 value is getting divided by number2,3,4 respectively
					}

				}
				printf("Your division output is: %.3lf\n\n\n",div);
				break;
				
		case 5:
				printf("You have selected MODULO \n");
				int modulo;
				
				printf("How many numbers would you like to enter and find it's modulo?: \n");
				scanf("%d", &n);
				
				for(i=1;i<=1;i++){
					printf("Enter the number%d: \n",i);
					scanf("%d",&v);
					modulo=v;// Storing the number1 value in modulo
					
						for(i=2;i<=n;i++){
							printf("Enter the number%d: \n",i);
							scanf("%d",&v);
							
							modulo%=v;
						}
				}
				printf("Your modulo output is: %d\n\n\n",modulo);
				break;
				
		case 6: 
				printf("Thank you for using the Calculator................\n\n\n");
				return 0;// To exit the calculator program using return 0
				break;
				
		default:
				printf("You have selected wrong option!\n\n\n");
				break;					
	}		
}

while(option>0 && option<7);


}





// ------------METHOD-2------------------

//#include<stdio.h>
//
//int main()
//{
//	int a,b,sum,sub,mul,div,mod;
//	printf("Enter any two numbers:\n");
//	scanf("%d %d",&a, &b);
//	sum=a+b;
//	sub=a-b;
//	mul=a*b;
//	div=a/b;
//	mod=a%b;
//	printf("sum is:%d\nsub is:%d\nmul is:%d\ndiv is:%d\nmod is:%d \n",sum,sub,mul,div,mod);
//	return 0;
//
//}
