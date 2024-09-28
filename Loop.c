/*
Author: Shahin-Halcon
*/

#include<stdio.h>

void main()
{
    // Declare variables
    int i = 1, n; // i is initialized to 1, and n will store the user-input value

    // Prompt user to enter a value for n
    printf("Enter n : ");
    scanf("%d", &n);

    // Loop from 1 to n (inclusive)
    while(i <= n)
    {
        // Print the current value of i
        printf("%d\n", i);
        
        // Increment i by 1
        i++;
    }
}