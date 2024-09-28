/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    int a, b, temp; // Declare variables a, b, and temp

    printf("Enter the value of a: "); // Prompt user to enter the value of a
    scanf("%d", &a); // Input the value of a

    printf("Enter the value of b: "); // Prompt user to enter the value of b
    scanf("%d", &b); // Input the value of b

    printf("Before swapping:\n"); // Print the values before swapping
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a; // Store the value of a in temp
    a = b; // Assign the value of b to a
    b = temp; // Assign the value of temp to b

    printf("After swapping:\n"); // Print the values after swapping
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}