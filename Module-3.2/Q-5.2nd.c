// Module 3.2.5.1 - Looping programs:

//2. WAP to take 10 no. Input from user and find out …
//3. How many Even numbers are there
//4. How many odd numbers are there
//5. Sum of even numbers
//6. Sum of odd numbers WAP to print table up to given numbers

#include<stdio.h>

int main(){
	
	int i=1,n,n_even=0,n_odd=0,s_even,s_odd, table[10];
	
	do{
		printf("Enter your number%d: \n",i);
		scanf("%d", &n);
		
		table[i]=n;//Storing each number into table array for later printing these numbers using for loop
			
		i++;//to increase the loop counting
		
		//Finding the total number of even and odd numbers as well as \\ the sum of even and odd numbers respectively
		
		if(n%2==0){
			printf("This is your even number\n\n");
			n_even++;// to calculate the number of even numbers
			s_even+=n;
		}
		else{
			printf("This is your odd number\n\n");
			n_odd++;// to calculate the number of odd numbers
			s_odd+=n;
		}		
	
	}
	while(i>=1 && i<=10);				
	
	printf("\n\nthe NUMBER of EVEN numbers entered: %d\n",n_even);
	printf("\n\nthe NUMBER of ODD numbers entered: %d\n",n_odd);
	
	printf("\n\nthe SUM of EVEN numbers entered: %d\n",s_even);
	printf("\n\nthe SUM of ODD numbers entered: %d\n\n\n\n",s_odd);
	
	//Printing the table of given numbers
	for(i=1;i<=10;i++){
		printf("TABLE%d is = %d\n",i,table[i]);
	}	
	
	
}
