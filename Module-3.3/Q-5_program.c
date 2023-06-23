// Module 3.3.5 - WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>

int main(){
	
	int size,i,j,another,option; // another=temporary value holding variable
	
	printf("How many array elements would you like to add?: \n");
	scanf("%d",&size);
	
	int a[size];
	printf("\nYour array elements are: \n");
	
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\t\t\t\tSelect Your Option: \n");
	printf("\n\n\t\t\t\t 1.Ascending Order");
	printf("\n\n\t\t\t\t 2.Descending Order\n");
	scanf("%d",&option);
	
	switch(option){
		
		case 1:
			for(i=0;i<size;i++){
		
			for(j=i+1;j<size;j++){
				
				if(a[i]>a[j]){
					another=a[i];
					a[i]=a[j];
					a[j]=another;
			}
		}
	}
		
	printf("\n-----------Ascending order array--------------\n");
	
	//Printing the Ascending order array elements	
	for(i=0;i<size;i++){
		printf("\nAscending order [%d] element of array is: %d\n",i,a[i]);
	}
	break;
	
		case 2:
			for(i=0;i<size;i++){
			
			for(j=i+1;j<size;j++){
				if(a[i]<a[j]){
					another=a[i];
					a[i]=a[j];
					a[j]=another;				
			}				
		}
	}
			printf("\n-----------Descending order array--------------\n");
	
	//Printing the Descending order array elements	
		for(i=0;i<size;i++){
			printf("\nDescending order [%d] element of array is: %d\n",i,a[i]);
		}
		break;	
		
	}
	
}
	
	// Comparing the array elements
//	for(i=0;i<size;i++){
//		
//		for(j=i+1;j<size;j++){
//			
//			if(a[i]>a[j]){
//				another=a[i];
//				a[i]=a[j];
//				a[j]=another;
//			}
//		}
//	}
//		
//	printf("\n-----------Ascending order array--------------\n");
//	
//	//Printing the Ascending order array elements	
//	for(i=0;i<size;i++){
//		printf("\nAscending order [%d] element of array is: %d\n",i,a[i]);
//	}
//
//	//Comparing the array elements
//	for(i=0;i<size;i++){
//		
//		for(j=i+1;j<size;j++){
//			if(a[i]<a[j]){
//				another=a[i];
//				a[i]=a[j];
//				a[j]=another;				
//			}				
//		}
//	}
//	printf("\n-----------Descending order array--------------\n");
//	
//	//Printing the Descending order array elements	
//	for(i=0;i<size;i++){
//		printf("\nDescending order [%d] element of array is: %d\n",i,a[i]);
//	}
//}

