#include<stdio.h>
int main()
{
	int total,m1,m2,m3;
	char grade[10],result, name[70];
	float average;
	printf("Enteryour name:-");
	scanf("%s",&name);
	printf("Enter marks for three subjects:-");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	average=total/3;
	if(average>75){
		printf("You got distinction.\n");
	}else if(average>59 && average<70){
		printf("You got first class.\n");
	}
	else if(average>49&&average<60){
		printf("You got second class.\n");
	}
	else if(average>39 && average<50){
		printf("You got third class.\n");
	}
	else{
		printf("You are fail.");
	}
	printf("Student name\t marks\t average\t grade");
	printf("\t%s\t%d\t%d\t%d\tf\t%s",name,m1,m2,m3,average,grade);
}
