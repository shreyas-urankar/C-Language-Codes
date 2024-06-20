// Sorting ;- Sorting mreans arranging array elemens in ascending or desending array.
#include<stdio.h>
int main()
{
    int i, j, n, temp;
    int arr[10];
    printf("Enter the number to be sorted:");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        printf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}