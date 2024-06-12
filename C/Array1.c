// Program for array handling
#include<stdio.h>

int main() {
    int marks[5];
    printf("Enter the marks of five subjects:\n");

    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    printf("The marks are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t", marks[i]);
    }

    return 0;
}
