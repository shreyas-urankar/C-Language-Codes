//To find greatest number among three number using nested if statement.

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three number's:-");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c)){
		printf("%d is greatest number.",a);
	}else if(b>c){
		printf("%d is gretatest number.",b);
	}else{
		printf("%d is greatest number.",c);
	}
}
