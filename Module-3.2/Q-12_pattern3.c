// Module 3.2.12 - Patterns:


//3. 1
//   2 3
//   4 5 6
//   7 8 9 10
//   11 12 13 14 15

#include<stdio.h>

int main(){
	int i,j;
	int k=1;
	
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%d",k++);
		}
	}
}
