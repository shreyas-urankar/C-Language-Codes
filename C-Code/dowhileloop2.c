//Program to accept the number and print the number its square and its cube ,stop if the number is 0.
#include<stdio.h>
int main()
{
	int num;
	do{
		printf("Enter an integer value:");
		scanf("%d",&num);
		printf("Enter 0 to end.....\n");
		printf("Number=%d\n",num);
		printf("Number=%d\n",num*num);
		printf("Number=%d\n",num*num*num);
	}	while(num!=0);
  }  
