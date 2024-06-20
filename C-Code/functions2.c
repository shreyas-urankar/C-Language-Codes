#include<stdio.h>

// Function prototype
int mult(int x, int y);

int main()
{
    int a, b, c;
    
    // Input two values
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    
    // Call the function to multiply
    c = mult(a, b);
    
    // Print the result
    printf("Result is %d\n", c);
    
    return 0;
}

// Function definition to multiply two numbers
int mult(int x, int y)
{
    int p;
    p = x * y;
    return p;
}
