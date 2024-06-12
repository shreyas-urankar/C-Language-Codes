#include<stdio.h>
int main()
{
	int choice;
	int x;
	int y;
	printf("Enter first numbers:-");
	scanf("%d",&x);
	printf("Enter second numbers:-");
	scanf("%d",&y);
	printf("\nVarious Arithmetic operation's:-");
	printf("\n1)Addition.");
	printf("\n2)Subtraction.");
	printf("\n3)Multiplication.");
	printf("\n4)Division.");
	printf("\n5)Modulus.");
	printf("Enter number of operation you want to perform:-");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Addition of %d and %d is %d\n",x,y,x+y);
			break;
		case 2:
			printf("subtraction of %d and %d is %d \n",x,y,x-y);
			break;
		case 3:
			printf("Multiplication of %d and %d is %d \n",x,y,x*y);
			break;
		case 4:
			printf("Division of %d and %d is %d \n,x,y,(float x/float y");
			break;
		case 5:
			printf("Modulus of %d and %d is %d\n",x,y,x%y);
			break;
		default:
			printf("Please enter number between 1 - 5.");
			break;
	}
	return 0;
}
