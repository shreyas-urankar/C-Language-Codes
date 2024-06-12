#include<stdio.h>
int main(){
	int a=10, b=12;
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	printf("The value of a is %d and value of b is %d.",a,b);
}
