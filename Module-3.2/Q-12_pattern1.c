// Module 3.2.12 - Patterns:


//1. 1
//   1 0
//   1 0 1
//   1 0 1 0
//   1 0 1 0 1

#include<stdio.h>

int main(){
	int i,j;
	
	for(i=j;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%d",j%2);
		}
	}
}
