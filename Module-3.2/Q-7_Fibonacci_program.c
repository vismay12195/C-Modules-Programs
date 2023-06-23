// Module 3.2.7 WAP to print Fibonacci series up to given numbers

#include<stdio.h>

int main(){
	int f[100],i,n;
	
	printf("How long do you want to print the Fibonacci series?: \n");
	scanf("%d",&n);
	f[0]=0; // Pre-defining the F0=0
	f[1]=1; // Pre-defining the F1=1
	
	printf("\n\n%d\n%d\n",f[0],f[1]);
	
	for(i=2;i<=n;i++){
		// The loop will run until the nth position Fn value.
		
		f[i]=f[i-1]+f[i-2]; // Fibonacci formula : Fn = Fn-1 + fn-2;
		printf("%d\n",f[i]);
		
	}
	
}


//==============METHOD-2==================

//#include<stdio.h>
//
//int main(){
//	
//	int n1,n2,n3;
//	n1=0;
//	n2=1;
//	printf("%d\n",n1);
//	printf("%d\n",n2);
//	
//	while(n3<=500){
//		n3=n1+n2;
//		printf("%d\n",n3);
//		n1=n2;
//		n2=n3;
//	}
//}
