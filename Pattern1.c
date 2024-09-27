// This program prints n number of stars
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

int main()
{
    int x, y, z;

    // Prompt the user to enter a number
    printf("enter your number");
    scanf("%d",&z);

    // Loop to print the stars
    for(x=0;x<=z;x++)
    {
        // Inner loop to print the stars in each row
        for(y=0;y<x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}