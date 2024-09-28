/*
Author: Shahin-Halcon
*/

#include<stdio.h>

void swap(int*, int*); // Function declaration for swapping two integers

int main()
{
    int a, b; // Declare variables a and b

    printf("Enter the value of a: "); // Prompt user to enter the value of a
    scanf("%d", &a); // Input the value of a

    printf("Enter the value of b: "); // Prompt user to enter the value of b
    scanf("%d", &b); // Input the value of b

    printf("Before swapping:\n"); // Print the values before swapping
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b); // Call the swap function to swap the values of a and b

    printf("After swapping:\n"); // Print the values after swapping
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int* x, int* y) // Function definition for swapping two integers
{
    int temp; // Declare a temporary variable

    temp = *x; // Store the value of x in temp
    *x = *y; // Assign the value of y to x
    *y = temp; // Assign the value of temp to y
}