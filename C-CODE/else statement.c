#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the number:-");
	scanf("%d",&a);
	if(a<=6){
		b=a>>1;
		printf("Left shift gives us =%d",b);
	}
	else{
		b=a>>1;
		printf("Single right shift gives us=%d",b);
	}
}
