// Predefined functions

#include<stdio.h>
int find_min(int a, int b, int c);
int main()
{
    int a,b,c;
    printf("Input three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    int min= find_min(a, b, c);
    return 0;
}
int find_min(int a, int b, int c)
{
    int min;
    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min){
        min=b;
    }
    printf("The minimum number is:%d",min);

}