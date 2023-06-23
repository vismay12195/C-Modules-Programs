// Module 3.2.12 - Patterns:


//6.  *    
//    * *  
//    * * *
//    * * * *
//	  * * * * *
//	  * * * * * *
//    * * * * *
//    * * * *
//    * * *
//    * * 
//    *


#include<stdio.h>

int main(){
	int i,j,k,l;
	
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("*");
		}
	}
	
	for(k=1;k<=1;k++){
		printf("\n");
		for(l=k;l<=6;l++){
			printf("*");
		}
	}
	
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=5;j>=i;j--){
			printf("*");
		}
	}
}


//===============METHOD-2========================

//#include <stdio.h>  
//int main()  
//{  
//    int n,i,j;  
//    printf("Enter the number of rows in your pattern: ");  
//    scanf("%d",&n);  
//    for(i = 1; i <= n; i++)  {  
//        for(j = 1; j <= i; j++)  {  
//            printf("*");  
//        }  
//        printf("\n");  
//    }  
//    for(i = n - 1; i >= 1; i--)  {  
//        for(j = 1; j <= i; j++)  {  
//            printf("*");  
//        }  
//        printf("\n");  
//    }    
//    return 0;  
//}  
