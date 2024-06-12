#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the first value:-");
	scanf("%d",&a);
	printf("Enter the second value:-");
	scanf("%d",&b);
	if(a>b){
		printf("First number is greater than second number.");
	}
	else{
		printf("Second number is greater than the first number.");
	}
	return 0;
}
