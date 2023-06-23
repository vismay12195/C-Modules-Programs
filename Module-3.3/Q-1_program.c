// Module 3.3.1 - Write a program to find out the max number from given array using function

#include<stdio.h>
#include<math.h>

int main(){
	int i,Size;
	printf("How many array elements would you like to add?: \n");
	scanf("%d",&Size);
	
	//Declaring the array
	int arr[Size];
	
	printf("Enter your array elements: \n");
	
	//Inputting the array elements
	for(i=0;i<Size;i++){
		scanf("%d",&arr[i]);
	}
		
	printf("The Max number from array is: %d",largest(arr,Size));

		
}

int largest(int arr[],int size){
	
	int Max_element;
	//Declaring maximum element as the first element
	Max_element = arr[0];
	int i;
	
	for(i=1;i<size;i++){
		
		//Updating the Max_element if the current element is higher 
		if(arr[i]>Max_element){
			Max_element=arr[i];
		}
	}
	return Max_element;
}
