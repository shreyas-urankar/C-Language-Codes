// Program for integer array initializtion.
#include<stdio.h>
// int main()
// {
//     int a[5]={22,5,9,3,8};
//     int i;
//     printf("Display numbers and its square:");
//     for(i=0;i<10;i++){
//         printf("%d\t",a[i]);
//         printf("%d",a[i]*a[i]);
//     }
// }

int main()
{
    int i;
    int num[5];
    printf("Enter five number to get its square:");
    for(i=0;i<5;i++){
        scanf("%d\t",&num[i]);
    }
       printf("Display numbers and their squares:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%d\n", num[i], num[i] * num[i]);
    }

    return 0;
}