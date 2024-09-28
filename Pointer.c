/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    int a, b; // Declare variables a and b
    int *A, *B; // Declare pointers A and B

    a = 2; // Initialize a to 2
    b = 10; // Initialize b to 10

    A = &a; // Assign the address of a to A
    B = &b; // Assign the address of b to B

    printf("%d\n", A); // Print the address of a
    printf("%p\n", A); // Print the address of a in pointer format
    printf("%d\n", *A); // Print the value of a
    printf("%p\n", *A); // This will cause a compilation error, as *A is an integer, not a pointer

    return 0;
}