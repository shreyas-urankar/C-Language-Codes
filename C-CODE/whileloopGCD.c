//Program to find GCD of two number using nesting zero control structure.
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter any two integer values:-\n");
	scanf("%d%d",&num1,&num2);
	while(num1!=0 && num2!=0){
		if(num1>num2){
			num1=num1-num2;
		}else{
			num2=num2-num1;
		}
	}
	printf("The GCD of two number's is:%d\n",num1);
}  
