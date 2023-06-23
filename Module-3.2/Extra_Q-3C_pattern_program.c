// Extra Q.3.C - Pyramid loop Programs
// * * * *
//   * * *
//     * *
//       *

#include<stdio.h>

int main(){
	
	int i,j,k;
	for(i=1;i<=4;i++){
		for(j=1;j<i;j++){
			
			printf(" ");
		}
		for(k=0;k<=4-i;k++){
			printf("*");
		}
		printf("\n");
	}
}
