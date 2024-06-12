#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number:-");
	scanf("%d",&a);
	int temp;
	temp=a%2;
	if(temp==0){
		printf("It is an even number.");
	}
	else{
		printf("The number is odd number.");
	}
	return 0;
}
