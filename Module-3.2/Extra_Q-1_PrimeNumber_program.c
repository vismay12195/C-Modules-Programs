// Extra Q.1 - Write a Program to check the given number is prime or not prime.

#include<stdio.h>

int main(){
	int num,flag=1,i,new_num;
	
	printf("check number if prime or not: \n");
	scanf("%d",&num);
	
	for(i=2;i<=num/2;i++){
		
		if(num%i==0){
			flag=0;
			break;
		}
	}	
	
	if(flag){
		printf("The number %d is prime",num);
}
	else{
		printf("The number %d is not prime\n\n\n",num);
	}
	
	int j,n,prime=0;
  	printf("\nEnter The Ending Value:");
  	scanf("%d",&n);
		  	for(i=1;i<=n;i++)
		  {
		     prime=0;
		     for(j=2;j<i;j++)
		     {
		       if(i%j==0)
		       {
		         prime++;
		       }
		     }
		     if(prime==0)
		     {
		        printf("\n%d",i);
		     }
		  }
		  return 0;
	
	
}
	
