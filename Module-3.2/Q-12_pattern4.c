// Module 3.2.12 - Patterns:


//4. A
//   A B
//   A B C
//   A B C D 
//   A B C D E

#include<stdio.h>

int main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%c",j+64);
		}
	}
}
